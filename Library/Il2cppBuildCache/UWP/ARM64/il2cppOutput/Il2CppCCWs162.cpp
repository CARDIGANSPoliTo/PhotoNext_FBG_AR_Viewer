#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<MongoDB.Driver.Core.Events.ClusterAddedServerEvent>
struct Action_1_t5BA32830763674DDE695BCBC065716130CACDF60;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterAddingServerEvent>
struct Action_1_tF3D4C2BCDB540B62875CC5BA18CC3E72BBD30120;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterClosedEvent>
struct Action_1_t2B5EAC736F838247138A10D8685A8DFFC224ECC9;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterClosingEvent>
struct Action_1_t3F0F7507AF6A97C9F01FD7E000143834A06BD389;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterDescriptionChangedEvent>
struct Action_1_tFAD40202A45EE6178001694B034992D4DE4C0E12;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterOpenedEvent>
struct Action_1_t450BF4AE730A2F98EBFD47D506D2EAB45A55A215;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterOpeningEvent>
struct Action_1_t03A5212D41B8453275EE31FE1E2D07F5316281EA;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterRemovedServerEvent>
struct Action_1_t158B89165289393D23937F067D5E73293D6E8128;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterRemovingServerEvent>
struct Action_1_t4EA1BFF42FF8F0C734C4FBC0758D75D31BE45664;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectedServerEvent>
struct Action_1_tEDDC11E5A676240ED9AC8D393034D03D90064A5B;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectingServerEvent>
struct Action_1_t739C3BB2CFB2301793DB39D163045E0E514C87ED;
// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectingServerFailedEvent>
struct Action_1_t2D7F584FD4E21D680ECDDD78B3ACF70776911FEA;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<MongoDB.Driver.Core.Events.SdamInformationEvent>
struct Action_1_tA65A889273A6FDAEA6AD4C12C33C829226BEEE8E;
// System.Action`1<MongoDB.Driver.Core.Events.ServerClosedEvent>
struct Action_1_t9F2869CC81D2D2BBFE9342B9F78D1AD6481B4969;
// System.Action`1<MongoDB.Driver.Core.Events.ServerClosingEvent>
struct Action_1_t71616651557047C8E5A40938CA6196E7F7FAD1EC;
// System.Action`1<MongoDB.Driver.Core.Events.ServerDescriptionChangedEvent>
struct Action_1_tBE08681C6651024785C526AFB0EB4B8C440826ED;
// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatFailedEvent>
struct Action_1_t78D5380D3D4FC5BD982FBBB7C3CEADFDDB91571F;
// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatStartedEvent>
struct Action_1_t457E41867CFFB117078596BC028A5DAEBB54E284;
// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatSucceededEvent>
struct Action_1_t1D19250DAAAD9EF2AD8A801E23E0A5EA5AA7AA9D;
// System.Action`1<MongoDB.Driver.Core.Events.ServerOpenedEvent>
struct Action_1_t0938F713C505FAC39803EE1CD1CFD934F595AA83;
// System.Action`1<MongoDB.Driver.Core.Events.ServerOpeningEvent>
struct Action_1_tC489A46B833E1C71E8AAE6E3A192464E70295816;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA;
// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>
struct Dictionary_2_t0CC64FAB51CA131E38CA8D65B07BC0B7DD08D3C5;
// System.EventHandler`1<MongoDB.Driver.Core.Clusters.ClusterDescriptionChangedEventArgs>
struct EventHandler_1_tEC8DC0631BC2FE86323C7A3F3A570CFEE5D7E4F2;
// System.EventHandler`1<MongoDB.Driver.Core.Servers.ServerDescriptionChangedEventArgs>
struct EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// MongoDB.Driver.Core.Misc.Range`1<System.Int32>
struct Range_1_t9FF4B101BB350BEFF523AB8381325C3D8EC90BE6;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// MongoDB.Driver.Core.Connections.BuildInfoResult
struct BuildInfoResult_tFF512A1C362A7508105773ED6A838077981C0D57;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// MongoDB.Driver.Core.Clusters.ClusterDescription
struct ClusterDescription_t7927D5A250EE20E6AD2AE3334410F8DC52C902A7;
// MongoDB.Driver.Core.Clusters.ClusterId
struct ClusterId_tE74231D0D1265D4127B78561FCCDCE816AFFF584;
// MongoDB.Driver.Core.Configuration.ClusterSettings
struct ClusterSettings_t4B3DDCABCCF98E8A35A079D9C5A92C19F1E74FC8;
// MongoDB.Libmongocrypt.CryptClient
struct CryptClient_tD213D6E23F1E69108CF78C6D7205E10C243D32E8;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// MongoDB.Driver.Core.Misc.ExponentiallyWeightedMovingAverage
struct ExponentiallyWeightedMovingAverage_tFB340D22746FD9B1722125B7CBF4A85364E1AECF;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// MongoDB.Driver.Core.Servers.HeartbeatDelay
struct HeartbeatDelay_tE88CC7ABA84AFC68F5C735AAD6C856BC2D239D2B;
// MongoDB.Bson.IO.IBsonChunk
struct IBsonChunk_tEC568D87C178EEC43D01069B3763312420C3A007;
// MongoDB.Driver.Core.Clusters.IClusterClock
struct IClusterClock_t30EA40182EFEF840EC73192F67A6EF2D1CC9E114;
// MongoDB.Driver.Core.Servers.IClusterableServer
struct IClusterableServer_tF457FD6D9AE1563A714FD28638364E250E9A667A;
// MongoDB.Driver.Core.Servers.IClusterableServerFactory
struct IClusterableServerFactory_tF405BF1518FB73E481893284BCC8A6D98A73CA4F;
// MongoDB.Driver.Core.Connections.IConnection
struct IConnection_tA41E03336726E83FBD287CF3AAD84DCA4423D306;
// MongoDB.Driver.Core.Connections.IConnectionFactory
struct IConnectionFactory_tCAB47057868C963B36D285E62EC4D0D2330B2161;
// MongoDB.Driver.Core.ConnectionPools.IConnectionPool
struct IConnectionPool_t6217ECC6AC68AFCDDF4B8A52EED671C957306C78;
// MongoDB.Driver.ICoreServerSession
struct ICoreServerSession_tA3C931A95B392FE985EA9DB275BC7E1DA45E43B7;
// MongoDB.Driver.ICoreServerSessionPool
struct ICoreServerSessionPool_t238F8B91350D220F4D01E16AF3BDAC7CE0975EE4;
// MongoDB.Driver.Core.Bindings.ICoreSessionHandle
struct ICoreSessionHandle_tD87A05251517164F6958FD7B725BB74722F9E38E;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Resources.IResourceReader
struct IResourceReader_tB5A7F9D51AB1F5FEC29628E2E541338D44A88379;
// MongoDB.Driver.Core.Servers.IRoundTripTimeMonitor
struct IRoundTripTimeMonitor_t05325F483300CD1D9016CD5E2366F470BC79981A;
// MongoDB.Driver.Core.Servers.IServer
struct IServer_t526B6679E8293DE5CF8C8A705977A1CB615DCED9;
// MongoDB.Driver.Core.Servers.IServerMonitor
struct IServerMonitor_t3F29D0079D7FAB85351F89B11F5BC4BF54A3EDF5;
// MongoDB.Driver.Core.Clusters.ServerSelectors.IServerSelector
struct IServerSelector_t25CEBF29257BBF645844D8B93B600A4F7EA71DFA;
// MongoDB.Driver.Core.Misc.InterlockedInt32
struct InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050;
// MongoDB.Driver.Core.Clusters.ServerSelectors.LatencyLimitingServerSelector
struct LatencyLimitingServerSelector_t595D47F5E573D14B68F3FAD63BDC241AAF6A207E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Resources.ResourceReader
struct ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// MongoDB.Driver.Core.Authentication.Sspi.SecurityCredential
struct SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325;
// MongoDB.Driver.Core.Misc.SemanticVersion
struct SemanticVersion_tED93EACD76DBBEEC250AF6B83A8114D71539C378;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// MongoDB.Driver.Core.Servers.ServerDescription
struct ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1;
// MongoDB.Driver.Core.Servers.ServerId
struct ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E;
// MongoDB.Driver.Core.Servers.ServerMonitorSettings
struct ServerMonitorSettings_t8DB33B0F1849006A88855EB72556426CB637F688;
// MongoDB.Driver.Core.Configuration.ServerSettings
struct ServerSettings_t6B6EDE66E7B36F7835F88878B52BECAD73C1AD2E;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.RuntimeStructs/GPtrArray
struct GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555;
// System.Threading.SemaphoreSlim/TaskNode
struct TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E;

IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_tD4026FABBA608F648777776BC282618C51E2AF46 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m82E1812FB137290B0EE35532E1008D32226FE5F3(float* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.Resources.ResourceSet
struct ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____caseInsensitiveTable_2;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ___Table_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_1), (void*)value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_2() { return static_cast<int32_t>(offsetof(ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F, ____caseInsensitiveTable_2)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__caseInsensitiveTable_2() const { return ____caseInsensitiveTable_2; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__caseInsensitiveTable_2() { return &____caseInsensitiveTable_2; }
	inline void set__caseInsensitiveTable_2(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____caseInsensitiveTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caseInsensitiveTable_2), (void*)value);
	}
};


// System.Security.SecureString
struct SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94  : public RuntimeObject
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Boolean System.Security.SecureString::read_only
	bool ___read_only_2;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_3;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_read_only_2() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___read_only_2)); }
	inline bool get_read_only_2() const { return ___read_only_2; }
	inline bool* get_address_of_read_only_2() { return &___read_only_2; }
	inline void set_read_only_2(bool value)
	{
		___read_only_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94, ___data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// MongoDB.Driver.Core.Misc.SemaphoreSlimRequest
struct SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource MongoDB.Driver.Core.Misc.SemaphoreSlimRequest::_disposeCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____disposeCancellationTokenSource_0;
	// System.Threading.CancellationTokenSource MongoDB.Driver.Core.Misc.SemaphoreSlimRequest::_linkedCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____linkedCancellationTokenSource_1;
	// System.Threading.SemaphoreSlim MongoDB.Driver.Core.Misc.SemaphoreSlimRequest::_semaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____semaphore_2;
	// System.Threading.Tasks.Task MongoDB.Driver.Core.Misc.SemaphoreSlimRequest::_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____task_3;

public:
	inline static int32_t get_offset_of__disposeCancellationTokenSource_0() { return static_cast<int32_t>(offsetof(SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB, ____disposeCancellationTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__disposeCancellationTokenSource_0() const { return ____disposeCancellationTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__disposeCancellationTokenSource_0() { return &____disposeCancellationTokenSource_0; }
	inline void set__disposeCancellationTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____disposeCancellationTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disposeCancellationTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__linkedCancellationTokenSource_1() { return static_cast<int32_t>(offsetof(SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB, ____linkedCancellationTokenSource_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__linkedCancellationTokenSource_1() const { return ____linkedCancellationTokenSource_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__linkedCancellationTokenSource_1() { return &____linkedCancellationTokenSource_1; }
	inline void set__linkedCancellationTokenSource_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____linkedCancellationTokenSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____linkedCancellationTokenSource_1), (void*)value);
	}

	inline static int32_t get_offset_of__semaphore_2() { return static_cast<int32_t>(offsetof(SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB, ____semaphore_2)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__semaphore_2() const { return ____semaphore_2; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__semaphore_2() { return &____semaphore_2; }
	inline void set__semaphore_2(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____semaphore_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____semaphore_2), (void*)value);
	}

	inline static int32_t get_offset_of__task_3() { return static_cast<int32_t>(offsetof(SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB, ____task_3)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__task_3() const { return ____task_3; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__task_3() { return &____task_3; }
	inline void set__task_3(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____task_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____task_3), (void*)value);
	}
};


// MongoDB.Driver.Core.Bindings.ServerChannelSource
struct ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97  : public RuntimeObject
{
public:
	// System.Boolean MongoDB.Driver.Core.Bindings.ServerChannelSource::_disposed
	bool ____disposed_0;
	// MongoDB.Driver.Core.Servers.IServer MongoDB.Driver.Core.Bindings.ServerChannelSource::_server
	RuntimeObject* ____server_1;
	// MongoDB.Driver.Core.Bindings.ICoreSessionHandle MongoDB.Driver.Core.Bindings.ServerChannelSource::_session
	RuntimeObject* ____session_2;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}

	inline static int32_t get_offset_of__server_1() { return static_cast<int32_t>(offsetof(ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97, ____server_1)); }
	inline RuntimeObject* get__server_1() const { return ____server_1; }
	inline RuntimeObject** get_address_of__server_1() { return &____server_1; }
	inline void set__server_1(RuntimeObject* value)
	{
		____server_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____server_1), (void*)value);
	}

	inline static int32_t get_offset_of__session_2() { return static_cast<int32_t>(offsetof(ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97, ____session_2)); }
	inline RuntimeObject* get__session_2() const { return ____session_2; }
	inline RuntimeObject** get_address_of__session_2() { return &____session_2; }
	inline void set__session_2(RuntimeObject* value)
	{
		____session_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____session_2), (void*)value);
	}
};


// MongoDB.Driver.Core.Servers.ServerMonitor
struct ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78  : public RuntimeObject
{
public:
	// MongoDB.Driver.Core.Servers.ServerDescription MongoDB.Driver.Core.Servers.ServerMonitor::_baseDescription
	ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * ____baseDescription_0;
	// MongoDB.Driver.Core.Connections.IConnection modreq(System.Runtime.CompilerServices.IsVolatile) MongoDB.Driver.Core.Servers.ServerMonitor::_connection
	RuntimeObject* ____connection_1;
	// MongoDB.Driver.Core.Connections.IConnectionFactory MongoDB.Driver.Core.Servers.ServerMonitor::_connectionFactory
	RuntimeObject* ____connectionFactory_2;
	// System.Threading.CancellationTokenSource MongoDB.Driver.Core.Servers.ServerMonitor::_heartbeatCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____heartbeatCancellationTokenSource_3;
	// MongoDB.Driver.Core.Servers.ServerDescription MongoDB.Driver.Core.Servers.ServerMonitor::_currentDescription
	ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * ____currentDescription_4;
	// System.Net.EndPoint MongoDB.Driver.Core.Servers.ServerMonitor::_endPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ____endPoint_5;
	// MongoDB.Driver.Core.Connections.BuildInfoResult MongoDB.Driver.Core.Servers.ServerMonitor::_handshakeBuildInfoResult
	BuildInfoResult_tFF512A1C362A7508105773ED6A838077981C0D57 * ____handshakeBuildInfoResult_6;
	// MongoDB.Driver.Core.Servers.HeartbeatDelay MongoDB.Driver.Core.Servers.ServerMonitor::_heartbeatDelay
	HeartbeatDelay_tE88CC7ABA84AFC68F5C735AAD6C856BC2D239D2B * ____heartbeatDelay_7;
	// System.Object MongoDB.Driver.Core.Servers.ServerMonitor::_lock
	RuntimeObject * ____lock_8;
	// System.Threading.CancellationTokenSource MongoDB.Driver.Core.Servers.ServerMonitor::_monitorCancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____monitorCancellationTokenSource_9;
	// MongoDB.Driver.Core.Servers.IRoundTripTimeMonitor MongoDB.Driver.Core.Servers.ServerMonitor::_roundTripTimeMonitor
	RuntimeObject* ____roundTripTimeMonitor_10;
	// MongoDB.Driver.Core.Servers.ServerId MongoDB.Driver.Core.Servers.ServerMonitor::_serverId
	ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * ____serverId_11;
	// MongoDB.Driver.Core.Misc.InterlockedInt32 MongoDB.Driver.Core.Servers.ServerMonitor::_state
	InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * ____state_12;
	// MongoDB.Driver.Core.Servers.ServerMonitorSettings MongoDB.Driver.Core.Servers.ServerMonitor::_serverMonitorSettings
	ServerMonitorSettings_t8DB33B0F1849006A88855EB72556426CB637F688 * ____serverMonitorSettings_13;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatStartedEvent> MongoDB.Driver.Core.Servers.ServerMonitor::_heartbeatStartedEventHandler
	Action_1_t457E41867CFFB117078596BC028A5DAEBB54E284 * ____heartbeatStartedEventHandler_14;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatSucceededEvent> MongoDB.Driver.Core.Servers.ServerMonitor::_heartbeatSucceededEventHandler
	Action_1_t1D19250DAAAD9EF2AD8A801E23E0A5EA5AA7AA9D * ____heartbeatSucceededEventHandler_15;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerHeartbeatFailedEvent> MongoDB.Driver.Core.Servers.ServerMonitor::_heartbeatFailedEventHandler
	Action_1_t78D5380D3D4FC5BD982FBBB7C3CEADFDDB91571F * ____heartbeatFailedEventHandler_16;
	// System.Action`1<MongoDB.Driver.Core.Events.SdamInformationEvent> MongoDB.Driver.Core.Servers.ServerMonitor::_sdamInformationEventHandler
	Action_1_tA65A889273A6FDAEA6AD4C12C33C829226BEEE8E * ____sdamInformationEventHandler_17;
	// System.EventHandler`1<MongoDB.Driver.Core.Servers.ServerDescriptionChangedEventArgs> MongoDB.Driver.Core.Servers.ServerMonitor::DescriptionChanged
	EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * ___DescriptionChanged_18;

public:
	inline static int32_t get_offset_of__baseDescription_0() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____baseDescription_0)); }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * get__baseDescription_0() const { return ____baseDescription_0; }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 ** get_address_of__baseDescription_0() { return &____baseDescription_0; }
	inline void set__baseDescription_0(ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * value)
	{
		____baseDescription_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseDescription_0), (void*)value);
	}

	inline static int32_t get_offset_of__connection_1() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____connection_1)); }
	inline RuntimeObject* get__connection_1() const { return ____connection_1; }
	inline RuntimeObject** get_address_of__connection_1() { return &____connection_1; }
	inline void set__connection_1(RuntimeObject* value)
	{
		____connection_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connection_1), (void*)value);
	}

	inline static int32_t get_offset_of__connectionFactory_2() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____connectionFactory_2)); }
	inline RuntimeObject* get__connectionFactory_2() const { return ____connectionFactory_2; }
	inline RuntimeObject** get_address_of__connectionFactory_2() { return &____connectionFactory_2; }
	inline void set__connectionFactory_2(RuntimeObject* value)
	{
		____connectionFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatCancellationTokenSource_3() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____heartbeatCancellationTokenSource_3)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__heartbeatCancellationTokenSource_3() const { return ____heartbeatCancellationTokenSource_3; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__heartbeatCancellationTokenSource_3() { return &____heartbeatCancellationTokenSource_3; }
	inline void set__heartbeatCancellationTokenSource_3(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____heartbeatCancellationTokenSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heartbeatCancellationTokenSource_3), (void*)value);
	}

	inline static int32_t get_offset_of__currentDescription_4() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____currentDescription_4)); }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * get__currentDescription_4() const { return ____currentDescription_4; }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 ** get_address_of__currentDescription_4() { return &____currentDescription_4; }
	inline void set__currentDescription_4(ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * value)
	{
		____currentDescription_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentDescription_4), (void*)value);
	}

	inline static int32_t get_offset_of__endPoint_5() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____endPoint_5)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get__endPoint_5() const { return ____endPoint_5; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of__endPoint_5() { return &____endPoint_5; }
	inline void set__endPoint_5(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		____endPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of__handshakeBuildInfoResult_6() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____handshakeBuildInfoResult_6)); }
	inline BuildInfoResult_tFF512A1C362A7508105773ED6A838077981C0D57 * get__handshakeBuildInfoResult_6() const { return ____handshakeBuildInfoResult_6; }
	inline BuildInfoResult_tFF512A1C362A7508105773ED6A838077981C0D57 ** get_address_of__handshakeBuildInfoResult_6() { return &____handshakeBuildInfoResult_6; }
	inline void set__handshakeBuildInfoResult_6(BuildInfoResult_tFF512A1C362A7508105773ED6A838077981C0D57 * value)
	{
		____handshakeBuildInfoResult_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handshakeBuildInfoResult_6), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatDelay_7() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____heartbeatDelay_7)); }
	inline HeartbeatDelay_tE88CC7ABA84AFC68F5C735AAD6C856BC2D239D2B * get__heartbeatDelay_7() const { return ____heartbeatDelay_7; }
	inline HeartbeatDelay_tE88CC7ABA84AFC68F5C735AAD6C856BC2D239D2B ** get_address_of__heartbeatDelay_7() { return &____heartbeatDelay_7; }
	inline void set__heartbeatDelay_7(HeartbeatDelay_tE88CC7ABA84AFC68F5C735AAD6C856BC2D239D2B * value)
	{
		____heartbeatDelay_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heartbeatDelay_7), (void*)value);
	}

	inline static int32_t get_offset_of__lock_8() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____lock_8)); }
	inline RuntimeObject * get__lock_8() const { return ____lock_8; }
	inline RuntimeObject ** get_address_of__lock_8() { return &____lock_8; }
	inline void set__lock_8(RuntimeObject * value)
	{
		____lock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_8), (void*)value);
	}

	inline static int32_t get_offset_of__monitorCancellationTokenSource_9() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____monitorCancellationTokenSource_9)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__monitorCancellationTokenSource_9() const { return ____monitorCancellationTokenSource_9; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__monitorCancellationTokenSource_9() { return &____monitorCancellationTokenSource_9; }
	inline void set__monitorCancellationTokenSource_9(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____monitorCancellationTokenSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____monitorCancellationTokenSource_9), (void*)value);
	}

	inline static int32_t get_offset_of__roundTripTimeMonitor_10() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____roundTripTimeMonitor_10)); }
	inline RuntimeObject* get__roundTripTimeMonitor_10() const { return ____roundTripTimeMonitor_10; }
	inline RuntimeObject** get_address_of__roundTripTimeMonitor_10() { return &____roundTripTimeMonitor_10; }
	inline void set__roundTripTimeMonitor_10(RuntimeObject* value)
	{
		____roundTripTimeMonitor_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____roundTripTimeMonitor_10), (void*)value);
	}

	inline static int32_t get_offset_of__serverId_11() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____serverId_11)); }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * get__serverId_11() const { return ____serverId_11; }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E ** get_address_of__serverId_11() { return &____serverId_11; }
	inline void set__serverId_11(ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * value)
	{
		____serverId_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverId_11), (void*)value);
	}

	inline static int32_t get_offset_of__state_12() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____state_12)); }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * get__state_12() const { return ____state_12; }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 ** get_address_of__state_12() { return &____state_12; }
	inline void set__state_12(InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * value)
	{
		____state_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_12), (void*)value);
	}

	inline static int32_t get_offset_of__serverMonitorSettings_13() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____serverMonitorSettings_13)); }
	inline ServerMonitorSettings_t8DB33B0F1849006A88855EB72556426CB637F688 * get__serverMonitorSettings_13() const { return ____serverMonitorSettings_13; }
	inline ServerMonitorSettings_t8DB33B0F1849006A88855EB72556426CB637F688 ** get_address_of__serverMonitorSettings_13() { return &____serverMonitorSettings_13; }
	inline void set__serverMonitorSettings_13(ServerMonitorSettings_t8DB33B0F1849006A88855EB72556426CB637F688 * value)
	{
		____serverMonitorSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverMonitorSettings_13), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatStartedEventHandler_14() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____heartbeatStartedEventHandler_14)); }
	inline Action_1_t457E41867CFFB117078596BC028A5DAEBB54E284 * get__heartbeatStartedEventHandler_14() const { return ____heartbeatStartedEventHandler_14; }
	inline Action_1_t457E41867CFFB117078596BC028A5DAEBB54E284 ** get_address_of__heartbeatStartedEventHandler_14() { return &____heartbeatStartedEventHandler_14; }
	inline void set__heartbeatStartedEventHandler_14(Action_1_t457E41867CFFB117078596BC028A5DAEBB54E284 * value)
	{
		____heartbeatStartedEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heartbeatStartedEventHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatSucceededEventHandler_15() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____heartbeatSucceededEventHandler_15)); }
	inline Action_1_t1D19250DAAAD9EF2AD8A801E23E0A5EA5AA7AA9D * get__heartbeatSucceededEventHandler_15() const { return ____heartbeatSucceededEventHandler_15; }
	inline Action_1_t1D19250DAAAD9EF2AD8A801E23E0A5EA5AA7AA9D ** get_address_of__heartbeatSucceededEventHandler_15() { return &____heartbeatSucceededEventHandler_15; }
	inline void set__heartbeatSucceededEventHandler_15(Action_1_t1D19250DAAAD9EF2AD8A801E23E0A5EA5AA7AA9D * value)
	{
		____heartbeatSucceededEventHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heartbeatSucceededEventHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatFailedEventHandler_16() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____heartbeatFailedEventHandler_16)); }
	inline Action_1_t78D5380D3D4FC5BD982FBBB7C3CEADFDDB91571F * get__heartbeatFailedEventHandler_16() const { return ____heartbeatFailedEventHandler_16; }
	inline Action_1_t78D5380D3D4FC5BD982FBBB7C3CEADFDDB91571F ** get_address_of__heartbeatFailedEventHandler_16() { return &____heartbeatFailedEventHandler_16; }
	inline void set__heartbeatFailedEventHandler_16(Action_1_t78D5380D3D4FC5BD982FBBB7C3CEADFDDB91571F * value)
	{
		____heartbeatFailedEventHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heartbeatFailedEventHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of__sdamInformationEventHandler_17() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ____sdamInformationEventHandler_17)); }
	inline Action_1_tA65A889273A6FDAEA6AD4C12C33C829226BEEE8E * get__sdamInformationEventHandler_17() const { return ____sdamInformationEventHandler_17; }
	inline Action_1_tA65A889273A6FDAEA6AD4C12C33C829226BEEE8E ** get_address_of__sdamInformationEventHandler_17() { return &____sdamInformationEventHandler_17; }
	inline void set__sdamInformationEventHandler_17(Action_1_tA65A889273A6FDAEA6AD4C12C33C829226BEEE8E * value)
	{
		____sdamInformationEventHandler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sdamInformationEventHandler_17), (void*)value);
	}

	inline static int32_t get_offset_of_DescriptionChanged_18() { return static_cast<int32_t>(offsetof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78, ___DescriptionChanged_18)); }
	inline EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * get_DescriptionChanged_18() const { return ___DescriptionChanged_18; }
	inline EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 ** get_address_of_DescriptionChanged_18() { return &___DescriptionChanged_18; }
	inline void set_DescriptionChanged_18(EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * value)
	{
		___DescriptionChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DescriptionChanged_18), (void*)value);
	}
};


// MongoDB.Driver.ServerSession
struct ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4  : public RuntimeObject
{
public:
	// MongoDB.Driver.ICoreServerSession MongoDB.Driver.ServerSession::_coreServerSession
	RuntimeObject* ____coreServerSession_0;

public:
	inline static int32_t get_offset_of__coreServerSession_0() { return static_cast<int32_t>(offsetof(ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4, ____coreServerSession_0)); }
	inline RuntimeObject* get__coreServerSession_0() const { return ____coreServerSession_0; }
	inline RuntimeObject** get_address_of__coreServerSession_0() { return &____coreServerSession_0; }
	inline void set__coreServerSession_0(RuntimeObject* value)
	{
		____coreServerSession_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____coreServerSession_0), (void*)value);
	}
};


// MongoDB.Bson.IO.SingleChunkBuffer
struct SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5  : public RuntimeObject
{
public:
	// MongoDB.Bson.IO.IBsonChunk MongoDB.Bson.IO.SingleChunkBuffer::_chunk
	RuntimeObject* ____chunk_0;
	// System.Boolean MongoDB.Bson.IO.SingleChunkBuffer::_disposed
	bool ____disposed_1;
	// System.Boolean MongoDB.Bson.IO.SingleChunkBuffer::_isReadOnly
	bool ____isReadOnly_2;
	// System.Int32 MongoDB.Bson.IO.SingleChunkBuffer::_length
	int32_t ____length_3;

public:
	inline static int32_t get_offset_of__chunk_0() { return static_cast<int32_t>(offsetof(SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5, ____chunk_0)); }
	inline RuntimeObject* get__chunk_0() const { return ____chunk_0; }
	inline RuntimeObject** get_address_of__chunk_0() { return &____chunk_0; }
	inline void set__chunk_0(RuntimeObject* value)
	{
		____chunk_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunk_0), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}

	inline static int32_t get_offset_of__isReadOnly_2() { return static_cast<int32_t>(offsetof(SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5, ____isReadOnly_2)); }
	inline bool get__isReadOnly_2() const { return ____isReadOnly_2; }
	inline bool* get_address_of__isReadOnly_2() { return &____isReadOnly_2; }
	inline void set__isReadOnly_2(bool value)
	{
		____isReadOnly_2 = value;
	}

	inline static int32_t get_offset_of__length_3() { return static_cast<int32_t>(offsetof(SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5, ____length_3)); }
	inline int32_t get__length_3() const { return ____length_3; }
	inline int32_t* get_address_of__length_3() { return &____length_3; }
	inline void set__length_3(int32_t value)
	{
		____length_3 = value;
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

// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Mono.RuntimeGPtrArrayHandle
struct RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7 
{
public:
	// Mono.RuntimeStructs/GPtrArray* Mono.RuntimeGPtrArrayHandle::value
	GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7, ___value_0)); }
	inline GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * get_value_0() const { return ___value_0; }
	inline GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GPtrArray_t481A0359CDF30AF32FB5B6D0DDBA2C26F55E3555 * value)
	{
		___value_0 = value;
	}
};


// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A  : public ResourceSet_t04B4806442F31EFE5374C485BB883BBA6F75566F
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;

public:
	inline static int32_t get_offset_of__resCache_4() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____resCache_4)); }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * get__resCache_4() const { return ____resCache_4; }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA ** get_address_of__resCache_4() { return &____resCache_4; }
	inline void set__resCache_4(Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * value)
	{
		____resCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resCache_4), (void*)value);
	}

	inline static int32_t get_offset_of__defaultReader_5() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____defaultReader_5)); }
	inline ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * get__defaultReader_5() const { return ____defaultReader_5; }
	inline ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 ** get_address_of__defaultReader_5() { return &____defaultReader_5; }
	inline void set__defaultReader_5(ResourceReader_tC8A3D1DC4FDF2CBC92782B9BD71194279D655492 * value)
	{
		____defaultReader_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultReader_5), (void*)value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_6() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____caseInsensitiveTable_6)); }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * get__caseInsensitiveTable_6() const { return ____caseInsensitiveTable_6; }
	inline Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA ** get_address_of__caseInsensitiveTable_6() { return &____caseInsensitiveTable_6; }
	inline void set__caseInsensitiveTable_6(Dictionary_2_t46A02F90A8D65228E634FEFFC9BE32C560592BBA * value)
	{
		____caseInsensitiveTable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caseInsensitiveTable_6), (void*)value);
	}

	inline static int32_t get_offset_of__haveReadFromReader_7() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A, ____haveReadFromReader_7)); }
	inline bool get__haveReadFromReader_7() const { return ____haveReadFromReader_7; }
	inline bool* get_address_of__haveReadFromReader_7() { return &____haveReadFromReader_7; }
	inline void set__haveReadFromReader_7(bool value)
	{
		____haveReadFromReader_7 = value;
	}
};


// System.Security.Cryptography.SHA1
struct SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.SHA256
struct SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.SHA384
struct SHA384_t9B79EB51A9026A16B0D6F9A306724FE4D3D3A9E9  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.SHA512
struct SHA512_tCF17311CCA734D60E55D2A03356FC9BFF4B040F8  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E__padding[1];
	};

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// Windows.Foundation.Size
struct Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t6AF48AEDBAB54EEF81D7BE93983928A632CEA6B7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4E45D3537EF0FB1FFE8AF3B2DCB63DB98A3A45AA(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_tF1450FE2A758CB62295758B955692AA1A5A3CCA9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3496400E5AB203A0F7596D49F46B68601F66DD77(Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5 * comReturnValue) = 0;
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


// MongoDB.Driver.Core.Clusters.ClusterConnectionMode
struct ClusterConnectionMode_tF31856EA30A7B8943FA157D0B8D82CFC857023FB 
{
public:
	// System.Int32 MongoDB.Driver.Core.Clusters.ClusterConnectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClusterConnectionMode_tF31856EA30A7B8943FA157D0B8D82CFC857023FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7  : public SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7, ___sha_4)); }
	inline SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t5D0A95A55E32BCC8976D5B91649E6C13C8334CD6 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sha_4), (void*)value);
	}
};


// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4  : public SHA1_t15B592B9935E19EC3FD5679B969239AC572E2C0E
{
public:
	// System.Byte[] System.Security.Cryptography.SHA1Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA1Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_stateSHA1
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____stateSHA1_6;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_expandedBuffer
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____expandedBuffer_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA1_6() { return static_cast<int32_t>(offsetof(SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4, ____stateSHA1_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__stateSHA1_6() const { return ____stateSHA1_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__stateSHA1_6() { return &____stateSHA1_6; }
	inline void set__stateSHA1_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____stateSHA1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateSHA1_6), (void*)value);
	}

	inline static int32_t get_offset_of__expandedBuffer_7() { return static_cast<int32_t>(offsetof(SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4, ____expandedBuffer_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__expandedBuffer_7() const { return ____expandedBuffer_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__expandedBuffer_7() { return &____expandedBuffer_7; }
	inline void set__expandedBuffer_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____expandedBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____expandedBuffer_7), (void*)value);
	}
};


// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B  : public SHA256_t7F98FBD5AA9E2F4AC1A5C13FF7122AFF1A920452
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA256Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_stateSHA256
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____stateSHA256_6;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_W
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA256_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B, ____stateSHA256_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__stateSHA256_6() const { return ____stateSHA256_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__stateSHA256_6() { return &____stateSHA256_6; }
	inline void set__stateSHA256_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____stateSHA256_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateSHA256_6), (void*)value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B, ____W_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__W_7() const { return ____W_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____W_7), (void*)value);
	}
};

struct SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_K
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_StaticFields, ____K_8)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__K_8() const { return ____K_8; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____K_8), (void*)value);
	}
};


// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA  : public SHA384_t9B79EB51A9026A16B0D6F9A306724FE4D3D3A9E9
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_stateSHA384
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____stateSHA384_6;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_W
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA384_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA, ____stateSHA384_6)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__stateSHA384_6() const { return ____stateSHA384_6; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__stateSHA384_6() { return &____stateSHA384_6; }
	inline void set__stateSHA384_6(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____stateSHA384_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateSHA384_6), (void*)value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA, ____W_7)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____W_7), (void*)value);
	}
};

struct SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::_K
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____K_8), (void*)value);
	}
};


// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD  : public SHA512_tCF17311CCA734D60E55D2A03356FC9BFF4B040F8
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::_count
	uint64_t ____count_5;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_stateSHA512
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____stateSHA512_6;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_W
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____W_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD, ____count_5)); }
	inline uint64_t get__count_5() const { return ____count_5; }
	inline uint64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(uint64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateSHA512_6() { return static_cast<int32_t>(offsetof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD, ____stateSHA512_6)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__stateSHA512_6() const { return ____stateSHA512_6; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__stateSHA512_6() { return &____stateSHA512_6; }
	inline void set__stateSHA512_6(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____stateSHA512_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateSHA512_6), (void*)value);
	}

	inline static int32_t get_offset_of__W_7() { return static_cast<int32_t>(offsetof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD, ____W_7)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__W_7() const { return ____W_7; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__W_7() { return &____W_7; }
	inline void set__W_7(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____W_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____W_7), (void*)value);
	}
};

struct SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_StaticFields
{
public:
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::_K
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____K_8;

public:
	inline static int32_t get_offset_of__K_8() { return static_cast<int32_t>(offsetof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_StaticFields, ____K_8)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__K_8() const { return ____K_8; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__K_8() { return &____K_8; }
	inline void set__K_8(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____K_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____K_8), (void*)value);
	}
};


// Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A 
{
public:
	// Mono.RuntimeGPtrArrayHandle Mono.SafeGPtrArrayHandle::handle
	RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A, ___handle_0)); }
	inline RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  get_handle_0() const { return ___handle_0; }
	inline RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(RuntimeGPtrArrayHandle_tFFF90E5789EADA37BC5B24EE93680549771445B7  value)
	{
		___handle_0 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E 
{
public:
	// System.String Mono.SafeStringMarshal::str
	String_t* ___str_0;
	// System.IntPtr Mono.SafeStringMarshal::marshaled_string
	intptr_t ___marshaled_string_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_0), (void*)value);
	}

	inline static int32_t get_offset_of_marshaled_string_1() { return static_cast<int32_t>(offsetof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E, ___marshaled_string_1)); }
	inline intptr_t get_marshaled_string_1() const { return ___marshaled_string_1; }
	inline intptr_t* get_address_of_marshaled_string_1() { return &___marshaled_string_1; }
	inline void set_marshaled_string_1(intptr_t value)
	{
		___marshaled_string_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshaled_pinvoke
{
	char* ___str_0;
	intptr_t ___marshaled_string_1;
};
// Native definition for COM marshalling of Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_marshaled_com
{
	Il2CppChar* ___str_0;
	intptr_t ___marshaled_string_1;
};

// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_currentCount
	int32_t ___m_currentCount_0;
	// System.Int32 System.Threading.SemaphoreSlim::m_maxCount
	int32_t ___m_maxCount_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitCount
	int32_t ___m_waitCount_2;
	// System.Object System.Threading.SemaphoreSlim::m_lockObj
	RuntimeObject * ___m_lockObj_3;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.SemaphoreSlim::m_waitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_waitHandle_4;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncHead
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___m_asyncHead_5;
	// System.Threading.SemaphoreSlim/TaskNode System.Threading.SemaphoreSlim::m_asyncTail
	TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * ___m_asyncTail_6;

public:
	inline static int32_t get_offset_of_m_currentCount_0() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_currentCount_0)); }
	inline int32_t get_m_currentCount_0() const { return ___m_currentCount_0; }
	inline int32_t* get_address_of_m_currentCount_0() { return &___m_currentCount_0; }
	inline void set_m_currentCount_0(int32_t value)
	{
		___m_currentCount_0 = value;
	}

	inline static int32_t get_offset_of_m_maxCount_1() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_maxCount_1)); }
	inline int32_t get_m_maxCount_1() const { return ___m_maxCount_1; }
	inline int32_t* get_address_of_m_maxCount_1() { return &___m_maxCount_1; }
	inline void set_m_maxCount_1(int32_t value)
	{
		___m_maxCount_1 = value;
	}

	inline static int32_t get_offset_of_m_waitCount_2() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_waitCount_2)); }
	inline int32_t get_m_waitCount_2() const { return ___m_waitCount_2; }
	inline int32_t* get_address_of_m_waitCount_2() { return &___m_waitCount_2; }
	inline void set_m_waitCount_2(int32_t value)
	{
		___m_waitCount_2 = value;
	}

	inline static int32_t get_offset_of_m_lockObj_3() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_lockObj_3)); }
	inline RuntimeObject * get_m_lockObj_3() const { return ___m_lockObj_3; }
	inline RuntimeObject ** get_address_of_m_lockObj_3() { return &___m_lockObj_3; }
	inline void set_m_lockObj_3(RuntimeObject * value)
	{
		___m_lockObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lockObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_waitHandle_4() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_waitHandle_4)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_waitHandle_4() const { return ___m_waitHandle_4; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_waitHandle_4() { return &___m_waitHandle_4; }
	inline void set_m_waitHandle_4(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_waitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_waitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_asyncHead_5() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_asyncHead_5)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_m_asyncHead_5() const { return ___m_asyncHead_5; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_m_asyncHead_5() { return &___m_asyncHead_5; }
	inline void set_m_asyncHead_5(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___m_asyncHead_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_asyncHead_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_asyncTail_6() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385, ___m_asyncTail_6)); }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * get_m_asyncTail_6() const { return ___m_asyncTail_6; }
	inline TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E ** get_address_of_m_asyncTail_6() { return &___m_asyncTail_6; }
	inline void set_m_asyncTail_6(TaskNode_tD3014A57510D018F890E6524AC62F9417E2E6C4E * value)
	{
		___m_asyncTail_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_asyncTail_6), (void*)value);
	}
};

struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::s_trueTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_trueTask_7;
	// System.Action`1<System.Object> System.Threading.SemaphoreSlim::s_cancellationTokenCanceledEventHandler
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCanceledEventHandler_9;

public:
	inline static int32_t get_offset_of_s_trueTask_7() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields, ___s_trueTask_7)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_trueTask_7() const { return ___s_trueTask_7; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_trueTask_7() { return &___s_trueTask_7; }
	inline void set_s_trueTask_7(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_trueTask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_trueTask_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_cancellationTokenCanceledEventHandler_9() { return static_cast<int32_t>(offsetof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_StaticFields, ___s_cancellationTokenCanceledEventHandler_9)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCanceledEventHandler_9() const { return ___s_cancellationTokenCanceledEventHandler_9; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCanceledEventHandler_9() { return &___s_cancellationTokenCanceledEventHandler_9; }
	inline void set_s_cancellationTokenCanceledEventHandler_9(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCanceledEventHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCanceledEventHandler_9), (void*)value);
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MongoDB.Driver.Core.Authentication.Sspi.SspiHandle
struct SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3 
{
public:
	// System.IntPtr MongoDB.Driver.Core.Authentication.Sspi.SspiHandle::_hi
	intptr_t ____hi_0;
	// System.IntPtr MongoDB.Driver.Core.Authentication.Sspi.SspiHandle::_low
	intptr_t ____low_1;

public:
	inline static int32_t get_offset_of__hi_0() { return static_cast<int32_t>(offsetof(SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3, ____hi_0)); }
	inline intptr_t get__hi_0() const { return ____hi_0; }
	inline intptr_t* get_address_of__hi_0() { return &____hi_0; }
	inline void set__hi_0(intptr_t value)
	{
		____hi_0 = value;
	}

	inline static int32_t get_offset_of__low_1() { return static_cast<int32_t>(offsetof(SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3, ____low_1)); }
	inline intptr_t get__low_1() const { return ____low_1; }
	inline intptr_t* get_address_of__low_1() { return &____low_1; }
	inline void set__low_1(intptr_t value)
	{
		____low_1 = value;
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


// MongoDB.Driver.Core.Clusters.Cluster
struct Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE  : public RuntimeObject
{
public:
	// MongoDB.Driver.Core.Clusters.IClusterClock MongoDB.Driver.Core.Clusters.Cluster::_clusterClock
	RuntimeObject* ____clusterClock_4;
	// MongoDB.Driver.Core.Clusters.ClusterId MongoDB.Driver.Core.Clusters.Cluster::_clusterId
	ClusterId_tE74231D0D1265D4127B78561FCCDCE816AFFF584 * ____clusterId_5;
	// MongoDB.Libmongocrypt.CryptClient MongoDB.Driver.Core.Clusters.Cluster::_cryptClient
	CryptClient_tD213D6E23F1E69108CF78C6D7205E10C243D32E8 * ____cryptClient_6;
	// MongoDB.Driver.Core.Clusters.ClusterDescription MongoDB.Driver.Core.Clusters.Cluster::_description
	ClusterDescription_t7927D5A250EE20E6AD2AE3334410F8DC52C902A7 * ____description_7;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> MongoDB.Driver.Core.Clusters.Cluster::_descriptionChangedTaskCompletionSource
	TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ____descriptionChangedTaskCompletionSource_8;
	// System.Object MongoDB.Driver.Core.Clusters.Cluster::_descriptionLock
	RuntimeObject * ____descriptionLock_9;
	// MongoDB.Driver.Core.Clusters.ServerSelectors.LatencyLimitingServerSelector MongoDB.Driver.Core.Clusters.Cluster::_latencyLimitingServerSelector
	LatencyLimitingServerSelector_t595D47F5E573D14B68F3FAD63BDC241AAF6A207E * ____latencyLimitingServerSelector_10;
	// System.Threading.Timer MongoDB.Driver.Core.Clusters.Cluster::_rapidHeartbeatTimer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ____rapidHeartbeatTimer_11;
	// System.Object MongoDB.Driver.Core.Clusters.Cluster::_serverSelectionWaitQueueLock
	RuntimeObject * ____serverSelectionWaitQueueLock_12;
	// System.Int32 MongoDB.Driver.Core.Clusters.Cluster::_serverSelectionWaitQueueSize
	int32_t ____serverSelectionWaitQueueSize_13;
	// MongoDB.Driver.Core.Servers.IClusterableServerFactory MongoDB.Driver.Core.Clusters.Cluster::_serverFactory
	RuntimeObject* ____serverFactory_14;
	// MongoDB.Driver.ICoreServerSessionPool MongoDB.Driver.Core.Clusters.Cluster::_serverSessionPool
	RuntimeObject* ____serverSessionPool_15;
	// MongoDB.Driver.Core.Configuration.ClusterSettings MongoDB.Driver.Core.Clusters.Cluster::_settings
	ClusterSettings_t4B3DDCABCCF98E8A35A079D9C5A92C19F1E74FC8 * ____settings_16;
	// MongoDB.Driver.Core.Misc.InterlockedInt32 MongoDB.Driver.Core.Clusters.Cluster::_state
	InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * ____state_17;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterDescriptionChangedEvent> MongoDB.Driver.Core.Clusters.Cluster::_descriptionChangedEventHandler
	Action_1_tFAD40202A45EE6178001694B034992D4DE4C0E12 * ____descriptionChangedEventHandler_18;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectingServerEvent> MongoDB.Driver.Core.Clusters.Cluster::_selectingServerEventHandler
	Action_1_t739C3BB2CFB2301793DB39D163045E0E514C87ED * ____selectingServerEventHandler_19;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectedServerEvent> MongoDB.Driver.Core.Clusters.Cluster::_selectedServerEventHandler
	Action_1_tEDDC11E5A676240ED9AC8D393034D03D90064A5B * ____selectedServerEventHandler_20;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterSelectingServerFailedEvent> MongoDB.Driver.Core.Clusters.Cluster::_selectingServerFailedEventHandler
	Action_1_t2D7F584FD4E21D680ECDDD78B3ACF70776911FEA * ____selectingServerFailedEventHandler_21;
	// System.EventHandler`1<MongoDB.Driver.Core.Clusters.ClusterDescriptionChangedEventArgs> MongoDB.Driver.Core.Clusters.Cluster::DescriptionChanged
	EventHandler_1_tEC8DC0631BC2FE86323C7A3F3A570CFEE5D7E4F2 * ___DescriptionChanged_22;

public:
	inline static int32_t get_offset_of__clusterClock_4() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____clusterClock_4)); }
	inline RuntimeObject* get__clusterClock_4() const { return ____clusterClock_4; }
	inline RuntimeObject** get_address_of__clusterClock_4() { return &____clusterClock_4; }
	inline void set__clusterClock_4(RuntimeObject* value)
	{
		____clusterClock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clusterClock_4), (void*)value);
	}

	inline static int32_t get_offset_of__clusterId_5() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____clusterId_5)); }
	inline ClusterId_tE74231D0D1265D4127B78561FCCDCE816AFFF584 * get__clusterId_5() const { return ____clusterId_5; }
	inline ClusterId_tE74231D0D1265D4127B78561FCCDCE816AFFF584 ** get_address_of__clusterId_5() { return &____clusterId_5; }
	inline void set__clusterId_5(ClusterId_tE74231D0D1265D4127B78561FCCDCE816AFFF584 * value)
	{
		____clusterId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clusterId_5), (void*)value);
	}

	inline static int32_t get_offset_of__cryptClient_6() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____cryptClient_6)); }
	inline CryptClient_tD213D6E23F1E69108CF78C6D7205E10C243D32E8 * get__cryptClient_6() const { return ____cryptClient_6; }
	inline CryptClient_tD213D6E23F1E69108CF78C6D7205E10C243D32E8 ** get_address_of__cryptClient_6() { return &____cryptClient_6; }
	inline void set__cryptClient_6(CryptClient_tD213D6E23F1E69108CF78C6D7205E10C243D32E8 * value)
	{
		____cryptClient_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cryptClient_6), (void*)value);
	}

	inline static int32_t get_offset_of__description_7() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____description_7)); }
	inline ClusterDescription_t7927D5A250EE20E6AD2AE3334410F8DC52C902A7 * get__description_7() const { return ____description_7; }
	inline ClusterDescription_t7927D5A250EE20E6AD2AE3334410F8DC52C902A7 ** get_address_of__description_7() { return &____description_7; }
	inline void set__description_7(ClusterDescription_t7927D5A250EE20E6AD2AE3334410F8DC52C902A7 * value)
	{
		____description_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____description_7), (void*)value);
	}

	inline static int32_t get_offset_of__descriptionChangedTaskCompletionSource_8() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____descriptionChangedTaskCompletionSource_8)); }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * get__descriptionChangedTaskCompletionSource_8() const { return ____descriptionChangedTaskCompletionSource_8; }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 ** get_address_of__descriptionChangedTaskCompletionSource_8() { return &____descriptionChangedTaskCompletionSource_8; }
	inline void set__descriptionChangedTaskCompletionSource_8(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * value)
	{
		____descriptionChangedTaskCompletionSource_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptionChangedTaskCompletionSource_8), (void*)value);
	}

	inline static int32_t get_offset_of__descriptionLock_9() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____descriptionLock_9)); }
	inline RuntimeObject * get__descriptionLock_9() const { return ____descriptionLock_9; }
	inline RuntimeObject ** get_address_of__descriptionLock_9() { return &____descriptionLock_9; }
	inline void set__descriptionLock_9(RuntimeObject * value)
	{
		____descriptionLock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptionLock_9), (void*)value);
	}

	inline static int32_t get_offset_of__latencyLimitingServerSelector_10() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____latencyLimitingServerSelector_10)); }
	inline LatencyLimitingServerSelector_t595D47F5E573D14B68F3FAD63BDC241AAF6A207E * get__latencyLimitingServerSelector_10() const { return ____latencyLimitingServerSelector_10; }
	inline LatencyLimitingServerSelector_t595D47F5E573D14B68F3FAD63BDC241AAF6A207E ** get_address_of__latencyLimitingServerSelector_10() { return &____latencyLimitingServerSelector_10; }
	inline void set__latencyLimitingServerSelector_10(LatencyLimitingServerSelector_t595D47F5E573D14B68F3FAD63BDC241AAF6A207E * value)
	{
		____latencyLimitingServerSelector_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____latencyLimitingServerSelector_10), (void*)value);
	}

	inline static int32_t get_offset_of__rapidHeartbeatTimer_11() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____rapidHeartbeatTimer_11)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get__rapidHeartbeatTimer_11() const { return ____rapidHeartbeatTimer_11; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of__rapidHeartbeatTimer_11() { return &____rapidHeartbeatTimer_11; }
	inline void set__rapidHeartbeatTimer_11(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		____rapidHeartbeatTimer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rapidHeartbeatTimer_11), (void*)value);
	}

	inline static int32_t get_offset_of__serverSelectionWaitQueueLock_12() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____serverSelectionWaitQueueLock_12)); }
	inline RuntimeObject * get__serverSelectionWaitQueueLock_12() const { return ____serverSelectionWaitQueueLock_12; }
	inline RuntimeObject ** get_address_of__serverSelectionWaitQueueLock_12() { return &____serverSelectionWaitQueueLock_12; }
	inline void set__serverSelectionWaitQueueLock_12(RuntimeObject * value)
	{
		____serverSelectionWaitQueueLock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverSelectionWaitQueueLock_12), (void*)value);
	}

	inline static int32_t get_offset_of__serverSelectionWaitQueueSize_13() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____serverSelectionWaitQueueSize_13)); }
	inline int32_t get__serverSelectionWaitQueueSize_13() const { return ____serverSelectionWaitQueueSize_13; }
	inline int32_t* get_address_of__serverSelectionWaitQueueSize_13() { return &____serverSelectionWaitQueueSize_13; }
	inline void set__serverSelectionWaitQueueSize_13(int32_t value)
	{
		____serverSelectionWaitQueueSize_13 = value;
	}

	inline static int32_t get_offset_of__serverFactory_14() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____serverFactory_14)); }
	inline RuntimeObject* get__serverFactory_14() const { return ____serverFactory_14; }
	inline RuntimeObject** get_address_of__serverFactory_14() { return &____serverFactory_14; }
	inline void set__serverFactory_14(RuntimeObject* value)
	{
		____serverFactory_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverFactory_14), (void*)value);
	}

	inline static int32_t get_offset_of__serverSessionPool_15() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____serverSessionPool_15)); }
	inline RuntimeObject* get__serverSessionPool_15() const { return ____serverSessionPool_15; }
	inline RuntimeObject** get_address_of__serverSessionPool_15() { return &____serverSessionPool_15; }
	inline void set__serverSessionPool_15(RuntimeObject* value)
	{
		____serverSessionPool_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverSessionPool_15), (void*)value);
	}

	inline static int32_t get_offset_of__settings_16() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____settings_16)); }
	inline ClusterSettings_t4B3DDCABCCF98E8A35A079D9C5A92C19F1E74FC8 * get__settings_16() const { return ____settings_16; }
	inline ClusterSettings_t4B3DDCABCCF98E8A35A079D9C5A92C19F1E74FC8 ** get_address_of__settings_16() { return &____settings_16; }
	inline void set__settings_16(ClusterSettings_t4B3DDCABCCF98E8A35A079D9C5A92C19F1E74FC8 * value)
	{
		____settings_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settings_16), (void*)value);
	}

	inline static int32_t get_offset_of__state_17() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____state_17)); }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * get__state_17() const { return ____state_17; }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 ** get_address_of__state_17() { return &____state_17; }
	inline void set__state_17(InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * value)
	{
		____state_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_17), (void*)value);
	}

	inline static int32_t get_offset_of__descriptionChangedEventHandler_18() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____descriptionChangedEventHandler_18)); }
	inline Action_1_tFAD40202A45EE6178001694B034992D4DE4C0E12 * get__descriptionChangedEventHandler_18() const { return ____descriptionChangedEventHandler_18; }
	inline Action_1_tFAD40202A45EE6178001694B034992D4DE4C0E12 ** get_address_of__descriptionChangedEventHandler_18() { return &____descriptionChangedEventHandler_18; }
	inline void set__descriptionChangedEventHandler_18(Action_1_tFAD40202A45EE6178001694B034992D4DE4C0E12 * value)
	{
		____descriptionChangedEventHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptionChangedEventHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of__selectingServerEventHandler_19() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____selectingServerEventHandler_19)); }
	inline Action_1_t739C3BB2CFB2301793DB39D163045E0E514C87ED * get__selectingServerEventHandler_19() const { return ____selectingServerEventHandler_19; }
	inline Action_1_t739C3BB2CFB2301793DB39D163045E0E514C87ED ** get_address_of__selectingServerEventHandler_19() { return &____selectingServerEventHandler_19; }
	inline void set__selectingServerEventHandler_19(Action_1_t739C3BB2CFB2301793DB39D163045E0E514C87ED * value)
	{
		____selectingServerEventHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingServerEventHandler_19), (void*)value);
	}

	inline static int32_t get_offset_of__selectedServerEventHandler_20() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____selectedServerEventHandler_20)); }
	inline Action_1_tEDDC11E5A676240ED9AC8D393034D03D90064A5B * get__selectedServerEventHandler_20() const { return ____selectedServerEventHandler_20; }
	inline Action_1_tEDDC11E5A676240ED9AC8D393034D03D90064A5B ** get_address_of__selectedServerEventHandler_20() { return &____selectedServerEventHandler_20; }
	inline void set__selectedServerEventHandler_20(Action_1_tEDDC11E5A676240ED9AC8D393034D03D90064A5B * value)
	{
		____selectedServerEventHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectedServerEventHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of__selectingServerFailedEventHandler_21() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ____selectingServerFailedEventHandler_21)); }
	inline Action_1_t2D7F584FD4E21D680ECDDD78B3ACF70776911FEA * get__selectingServerFailedEventHandler_21() const { return ____selectingServerFailedEventHandler_21; }
	inline Action_1_t2D7F584FD4E21D680ECDDD78B3ACF70776911FEA ** get_address_of__selectingServerFailedEventHandler_21() { return &____selectingServerFailedEventHandler_21; }
	inline void set__selectingServerFailedEventHandler_21(Action_1_t2D7F584FD4E21D680ECDDD78B3ACF70776911FEA * value)
	{
		____selectingServerFailedEventHandler_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____selectingServerFailedEventHandler_21), (void*)value);
	}

	inline static int32_t get_offset_of_DescriptionChanged_22() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE, ___DescriptionChanged_22)); }
	inline EventHandler_1_tEC8DC0631BC2FE86323C7A3F3A570CFEE5D7E4F2 * get_DescriptionChanged_22() const { return ___DescriptionChanged_22; }
	inline EventHandler_1_tEC8DC0631BC2FE86323C7A3F3A570CFEE5D7E4F2 ** get_address_of_DescriptionChanged_22() { return &___DescriptionChanged_22; }
	inline void set_DescriptionChanged_22(EventHandler_1_tEC8DC0631BC2FE86323C7A3F3A570CFEE5D7E4F2 * value)
	{
		___DescriptionChanged_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DescriptionChanged_22), (void*)value);
	}
};

struct Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE_StaticFields
{
public:
	// System.TimeSpan MongoDB.Driver.Core.Clusters.Cluster::__minHeartbeatInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  _____minHeartbeatInterval_0;
	// MongoDB.Driver.Core.Misc.SemanticVersion MongoDB.Driver.Core.Clusters.Cluster::__minSupportedServerVersion
	SemanticVersion_tED93EACD76DBBEEC250AF6B83A8114D71539C378 * _____minSupportedServerVersion_1;
	// MongoDB.Driver.Core.Clusters.ServerSelectors.IServerSelector MongoDB.Driver.Core.Clusters.Cluster::__randomServerSelector
	RuntimeObject* _____randomServerSelector_2;
	// MongoDB.Driver.Core.Misc.Range`1<System.Int32> MongoDB.Driver.Core.Clusters.Cluster::__supportedWireVersionRange
	Range_1_t9FF4B101BB350BEFF523AB8381325C3D8EC90BE6 * _____supportedWireVersionRange_3;

public:
	inline static int32_t get_offset_of___minHeartbeatInterval_0() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE_StaticFields, _____minHeartbeatInterval_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get___minHeartbeatInterval_0() const { return _____minHeartbeatInterval_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of___minHeartbeatInterval_0() { return &_____minHeartbeatInterval_0; }
	inline void set___minHeartbeatInterval_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		_____minHeartbeatInterval_0 = value;
	}

	inline static int32_t get_offset_of___minSupportedServerVersion_1() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE_StaticFields, _____minSupportedServerVersion_1)); }
	inline SemanticVersion_tED93EACD76DBBEEC250AF6B83A8114D71539C378 * get___minSupportedServerVersion_1() const { return _____minSupportedServerVersion_1; }
	inline SemanticVersion_tED93EACD76DBBEEC250AF6B83A8114D71539C378 ** get_address_of___minSupportedServerVersion_1() { return &_____minSupportedServerVersion_1; }
	inline void set___minSupportedServerVersion_1(SemanticVersion_tED93EACD76DBBEEC250AF6B83A8114D71539C378 * value)
	{
		_____minSupportedServerVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____minSupportedServerVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of___randomServerSelector_2() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE_StaticFields, _____randomServerSelector_2)); }
	inline RuntimeObject* get___randomServerSelector_2() const { return _____randomServerSelector_2; }
	inline RuntimeObject** get_address_of___randomServerSelector_2() { return &_____randomServerSelector_2; }
	inline void set___randomServerSelector_2(RuntimeObject* value)
	{
		_____randomServerSelector_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____randomServerSelector_2), (void*)value);
	}

	inline static int32_t get_offset_of___supportedWireVersionRange_3() { return static_cast<int32_t>(offsetof(Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE_StaticFields, _____supportedWireVersionRange_3)); }
	inline Range_1_t9FF4B101BB350BEFF523AB8381325C3D8EC90BE6 * get___supportedWireVersionRange_3() const { return _____supportedWireVersionRange_3; }
	inline Range_1_t9FF4B101BB350BEFF523AB8381325C3D8EC90BE6 ** get_address_of___supportedWireVersionRange_3() { return &_____supportedWireVersionRange_3; }
	inline void set___supportedWireVersionRange_3(Range_1_t9FF4B101BB350BEFF523AB8381325C3D8EC90BE6 * value)
	{
		_____supportedWireVersionRange_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____supportedWireVersionRange_3), (void*)value);
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// MongoDB.Driver.Core.Servers.RoundTripTimeMonitor
struct RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF  : public RuntimeObject
{
public:
	// MongoDB.Driver.Core.Misc.ExponentiallyWeightedMovingAverage MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_averageRoundTripTimeCalculator
	ExponentiallyWeightedMovingAverage_tFB340D22746FD9B1722125B7CBF4A85364E1AECF * ____averageRoundTripTimeCalculator_0;
	// System.Threading.CancellationToken MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_1;
	// System.Threading.CancellationTokenSource MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_cancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancellationTokenSource_2;
	// MongoDB.Driver.Core.Connections.IConnectionFactory MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_connectionFactory
	RuntimeObject* ____connectionFactory_3;
	// System.Boolean MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_disposed
	bool ____disposed_4;
	// System.Net.EndPoint MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_endPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ____endPoint_5;
	// System.TimeSpan MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_heartbeatInterval
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ____heartbeatInterval_6;
	// System.Object MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_lock
	RuntimeObject * ____lock_7;
	// MongoDB.Driver.Core.Connections.IConnection MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_roundTripTimeConnection
	RuntimeObject* ____roundTripTimeConnection_8;
	// MongoDB.Driver.Core.Servers.ServerId MongoDB.Driver.Core.Servers.RoundTripTimeMonitor::_serverId
	ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * ____serverId_9;

public:
	inline static int32_t get_offset_of__averageRoundTripTimeCalculator_0() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____averageRoundTripTimeCalculator_0)); }
	inline ExponentiallyWeightedMovingAverage_tFB340D22746FD9B1722125B7CBF4A85364E1AECF * get__averageRoundTripTimeCalculator_0() const { return ____averageRoundTripTimeCalculator_0; }
	inline ExponentiallyWeightedMovingAverage_tFB340D22746FD9B1722125B7CBF4A85364E1AECF ** get_address_of__averageRoundTripTimeCalculator_0() { return &____averageRoundTripTimeCalculator_0; }
	inline void set__averageRoundTripTimeCalculator_0(ExponentiallyWeightedMovingAverage_tFB340D22746FD9B1722125B7CBF4A85364E1AECF * value)
	{
		____averageRoundTripTimeCalculator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____averageRoundTripTimeCalculator_0), (void*)value);
	}

	inline static int32_t get_offset_of__cancellationToken_1() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____cancellationToken_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_1() const { return ____cancellationToken_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_1() { return &____cancellationToken_1; }
	inline void set__cancellationToken_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_1))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__cancellationTokenSource_2() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____cancellationTokenSource_2)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancellationTokenSource_2() const { return ____cancellationTokenSource_2; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancellationTokenSource_2() { return &____cancellationTokenSource_2; }
	inline void set__cancellationTokenSource_2(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancellationTokenSource_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancellationTokenSource_2), (void*)value);
	}

	inline static int32_t get_offset_of__connectionFactory_3() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____connectionFactory_3)); }
	inline RuntimeObject* get__connectionFactory_3() const { return ____connectionFactory_3; }
	inline RuntimeObject** get_address_of__connectionFactory_3() { return &____connectionFactory_3; }
	inline void set__connectionFactory_3(RuntimeObject* value)
	{
		____connectionFactory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionFactory_3), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__endPoint_5() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____endPoint_5)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get__endPoint_5() const { return ____endPoint_5; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of__endPoint_5() { return &____endPoint_5; }
	inline void set__endPoint_5(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		____endPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of__heartbeatInterval_6() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____heartbeatInterval_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get__heartbeatInterval_6() const { return ____heartbeatInterval_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of__heartbeatInterval_6() { return &____heartbeatInterval_6; }
	inline void set__heartbeatInterval_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		____heartbeatInterval_6 = value;
	}

	inline static int32_t get_offset_of__lock_7() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____lock_7)); }
	inline RuntimeObject * get__lock_7() const { return ____lock_7; }
	inline RuntimeObject ** get_address_of__lock_7() { return &____lock_7; }
	inline void set__lock_7(RuntimeObject * value)
	{
		____lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_7), (void*)value);
	}

	inline static int32_t get_offset_of__roundTripTimeConnection_8() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____roundTripTimeConnection_8)); }
	inline RuntimeObject* get__roundTripTimeConnection_8() const { return ____roundTripTimeConnection_8; }
	inline RuntimeObject** get_address_of__roundTripTimeConnection_8() { return &____roundTripTimeConnection_8; }
	inline void set__roundTripTimeConnection_8(RuntimeObject* value)
	{
		____roundTripTimeConnection_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____roundTripTimeConnection_8), (void*)value);
	}

	inline static int32_t get_offset_of__serverId_9() { return static_cast<int32_t>(offsetof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF, ____serverId_9)); }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * get__serverId_9() const { return ____serverId_9; }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E ** get_address_of__serverId_9() { return &____serverId_9; }
	inline void set__serverId_9(ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * value)
	{
		____serverId_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverId_9), (void*)value);
	}
};


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// MongoDB.Driver.Core.Authentication.Sspi.SecurityContext
struct SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:
	// MongoDB.Driver.Core.Authentication.Sspi.SecurityCredential MongoDB.Driver.Core.Authentication.Sspi.SecurityContext::_credential
	SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325 * ____credential_7;
	// MongoDB.Driver.Core.Authentication.Sspi.SspiHandle MongoDB.Driver.Core.Authentication.Sspi.SecurityContext::_sspiHandle
	SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  ____sspiHandle_8;
	// System.Boolean MongoDB.Driver.Core.Authentication.Sspi.SecurityContext::_isInitialized
	bool ____isInitialized_9;

public:
	inline static int32_t get_offset_of__credential_7() { return static_cast<int32_t>(offsetof(SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F, ____credential_7)); }
	inline SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325 * get__credential_7() const { return ____credential_7; }
	inline SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325 ** get_address_of__credential_7() { return &____credential_7; }
	inline void set__credential_7(SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325 * value)
	{
		____credential_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____credential_7), (void*)value);
	}

	inline static int32_t get_offset_of__sspiHandle_8() { return static_cast<int32_t>(offsetof(SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F, ____sspiHandle_8)); }
	inline SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  get__sspiHandle_8() const { return ____sspiHandle_8; }
	inline SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3 * get_address_of__sspiHandle_8() { return &____sspiHandle_8; }
	inline void set__sspiHandle_8(SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  value)
	{
		____sspiHandle_8 = value;
	}

	inline static int32_t get_offset_of__isInitialized_9() { return static_cast<int32_t>(offsetof(SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F, ____isInitialized_9)); }
	inline bool get__isInitialized_9() const { return ____isInitialized_9; }
	inline bool* get_address_of__isInitialized_9() { return &____isInitialized_9; }
	inline void set__isInitialized_9(bool value)
	{
		____isInitialized_9 = value;
	}
};

struct SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_StaticFields
{
public:
	// System.Int32 MongoDB.Driver.Core.Authentication.Sspi.SecurityContext::__maxTokenSize
	int32_t _____maxTokenSize_6;

public:
	inline static int32_t get_offset_of___maxTokenSize_6() { return static_cast<int32_t>(offsetof(SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_StaticFields, _____maxTokenSize_6)); }
	inline int32_t get___maxTokenSize_6() const { return _____maxTokenSize_6; }
	inline int32_t* get_address_of___maxTokenSize_6() { return &_____maxTokenSize_6; }
	inline void set___maxTokenSize_6(int32_t value)
	{
		_____maxTokenSize_6 = value;
	}
};


// MongoDB.Driver.Core.Authentication.Sspi.SecurityCredential
struct SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:
	// MongoDB.Driver.Core.Authentication.Sspi.SspiHandle MongoDB.Driver.Core.Authentication.Sspi.SecurityCredential::_sspiHandle
	SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  ____sspiHandle_6;

public:
	inline static int32_t get_offset_of__sspiHandle_6() { return static_cast<int32_t>(offsetof(SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325, ____sspiHandle_6)); }
	inline SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  get__sspiHandle_6() const { return ____sspiHandle_6; }
	inline SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3 * get_address_of__sspiHandle_6() { return &____sspiHandle_6; }
	inline void set__sspiHandle_6(SspiHandle_tDF1CE6EA6A88126DD416A9CD0CB30045B9030FF3  value)
	{
		____sspiHandle_6 = value;
	}
};


// MongoDB.Driver.Core.Servers.Server
struct Server_t9466F58EC29670181DDF530CC64446CD1FC307C2  : public RuntimeObject
{
public:
	// MongoDB.Driver.Core.Servers.ServerDescription MongoDB.Driver.Core.Servers.Server::_baseDescription
	ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * ____baseDescription_1;
	// MongoDB.Driver.Core.Clusters.IClusterClock MongoDB.Driver.Core.Servers.Server::_clusterClock
	RuntimeObject* ____clusterClock_2;
	// MongoDB.Driver.Core.Clusters.ClusterConnectionMode MongoDB.Driver.Core.Servers.Server::_clusterConnectionMode
	int32_t ____clusterConnectionMode_3;
	// MongoDB.Driver.Core.ConnectionPools.IConnectionPool MongoDB.Driver.Core.Servers.Server::_connectionPool
	RuntimeObject* ____connectionPool_4;
	// MongoDB.Driver.Core.Servers.ServerDescription MongoDB.Driver.Core.Servers.Server::_currentDescription
	ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * ____currentDescription_5;
	// System.Net.EndPoint MongoDB.Driver.Core.Servers.Server::_endPoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ____endPoint_6;
	// MongoDB.Driver.Core.Servers.IServerMonitor MongoDB.Driver.Core.Servers.Server::_monitor
	RuntimeObject* ____monitor_7;
	// MongoDB.Driver.Core.Servers.ServerId MongoDB.Driver.Core.Servers.Server::_serverId
	ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * ____serverId_8;
	// MongoDB.Driver.Core.Configuration.ServerSettings MongoDB.Driver.Core.Servers.Server::_settings
	ServerSettings_t6B6EDE66E7B36F7835F88878B52BECAD73C1AD2E * ____settings_9;
	// MongoDB.Driver.Core.Misc.InterlockedInt32 MongoDB.Driver.Core.Servers.Server::_state
	InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * ____state_10;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerOpeningEvent> MongoDB.Driver.Core.Servers.Server::_openingEventHandler
	Action_1_tC489A46B833E1C71E8AAE6E3A192464E70295816 * ____openingEventHandler_11;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerOpenedEvent> MongoDB.Driver.Core.Servers.Server::_openedEventHandler
	Action_1_t0938F713C505FAC39803EE1CD1CFD934F595AA83 * ____openedEventHandler_12;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerClosingEvent> MongoDB.Driver.Core.Servers.Server::_closingEventHandler
	Action_1_t71616651557047C8E5A40938CA6196E7F7FAD1EC * ____closingEventHandler_13;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerClosedEvent> MongoDB.Driver.Core.Servers.Server::_closedEventHandler
	Action_1_t9F2869CC81D2D2BBFE9342B9F78D1AD6481B4969 * ____closedEventHandler_14;
	// System.Action`1<MongoDB.Driver.Core.Events.ServerDescriptionChangedEvent> MongoDB.Driver.Core.Servers.Server::_descriptionChangedEventHandler
	Action_1_tBE08681C6651024785C526AFB0EB4B8C440826ED * ____descriptionChangedEventHandler_15;
	// System.EventHandler`1<MongoDB.Driver.Core.Servers.ServerDescriptionChangedEventArgs> MongoDB.Driver.Core.Servers.Server::DescriptionChanged
	EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * ___DescriptionChanged_16;

public:
	inline static int32_t get_offset_of__baseDescription_1() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____baseDescription_1)); }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * get__baseDescription_1() const { return ____baseDescription_1; }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 ** get_address_of__baseDescription_1() { return &____baseDescription_1; }
	inline void set__baseDescription_1(ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * value)
	{
		____baseDescription_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseDescription_1), (void*)value);
	}

	inline static int32_t get_offset_of__clusterClock_2() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____clusterClock_2)); }
	inline RuntimeObject* get__clusterClock_2() const { return ____clusterClock_2; }
	inline RuntimeObject** get_address_of__clusterClock_2() { return &____clusterClock_2; }
	inline void set__clusterClock_2(RuntimeObject* value)
	{
		____clusterClock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clusterClock_2), (void*)value);
	}

	inline static int32_t get_offset_of__clusterConnectionMode_3() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____clusterConnectionMode_3)); }
	inline int32_t get__clusterConnectionMode_3() const { return ____clusterConnectionMode_3; }
	inline int32_t* get_address_of__clusterConnectionMode_3() { return &____clusterConnectionMode_3; }
	inline void set__clusterConnectionMode_3(int32_t value)
	{
		____clusterConnectionMode_3 = value;
	}

	inline static int32_t get_offset_of__connectionPool_4() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____connectionPool_4)); }
	inline RuntimeObject* get__connectionPool_4() const { return ____connectionPool_4; }
	inline RuntimeObject** get_address_of__connectionPool_4() { return &____connectionPool_4; }
	inline void set__connectionPool_4(RuntimeObject* value)
	{
		____connectionPool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionPool_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentDescription_5() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____currentDescription_5)); }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * get__currentDescription_5() const { return ____currentDescription_5; }
	inline ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 ** get_address_of__currentDescription_5() { return &____currentDescription_5; }
	inline void set__currentDescription_5(ServerDescription_tA8B81AF9A02269ACF4D6B01E3870CE667F177BD1 * value)
	{
		____currentDescription_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentDescription_5), (void*)value);
	}

	inline static int32_t get_offset_of__endPoint_6() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____endPoint_6)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get__endPoint_6() const { return ____endPoint_6; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of__endPoint_6() { return &____endPoint_6; }
	inline void set__endPoint_6(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		____endPoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endPoint_6), (void*)value);
	}

	inline static int32_t get_offset_of__monitor_7() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____monitor_7)); }
	inline RuntimeObject* get__monitor_7() const { return ____monitor_7; }
	inline RuntimeObject** get_address_of__monitor_7() { return &____monitor_7; }
	inline void set__monitor_7(RuntimeObject* value)
	{
		____monitor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____monitor_7), (void*)value);
	}

	inline static int32_t get_offset_of__serverId_8() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____serverId_8)); }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * get__serverId_8() const { return ____serverId_8; }
	inline ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E ** get_address_of__serverId_8() { return &____serverId_8; }
	inline void set__serverId_8(ServerId_tBF11186DD759BFC5BA937E4B604181D76146ED7E * value)
	{
		____serverId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serverId_8), (void*)value);
	}

	inline static int32_t get_offset_of__settings_9() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____settings_9)); }
	inline ServerSettings_t6B6EDE66E7B36F7835F88878B52BECAD73C1AD2E * get__settings_9() const { return ____settings_9; }
	inline ServerSettings_t6B6EDE66E7B36F7835F88878B52BECAD73C1AD2E ** get_address_of__settings_9() { return &____settings_9; }
	inline void set__settings_9(ServerSettings_t6B6EDE66E7B36F7835F88878B52BECAD73C1AD2E * value)
	{
		____settings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settings_9), (void*)value);
	}

	inline static int32_t get_offset_of__state_10() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____state_10)); }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * get__state_10() const { return ____state_10; }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 ** get_address_of__state_10() { return &____state_10; }
	inline void set__state_10(InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * value)
	{
		____state_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_10), (void*)value);
	}

	inline static int32_t get_offset_of__openingEventHandler_11() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____openingEventHandler_11)); }
	inline Action_1_tC489A46B833E1C71E8AAE6E3A192464E70295816 * get__openingEventHandler_11() const { return ____openingEventHandler_11; }
	inline Action_1_tC489A46B833E1C71E8AAE6E3A192464E70295816 ** get_address_of__openingEventHandler_11() { return &____openingEventHandler_11; }
	inline void set__openingEventHandler_11(Action_1_tC489A46B833E1C71E8AAE6E3A192464E70295816 * value)
	{
		____openingEventHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____openingEventHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of__openedEventHandler_12() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____openedEventHandler_12)); }
	inline Action_1_t0938F713C505FAC39803EE1CD1CFD934F595AA83 * get__openedEventHandler_12() const { return ____openedEventHandler_12; }
	inline Action_1_t0938F713C505FAC39803EE1CD1CFD934F595AA83 ** get_address_of__openedEventHandler_12() { return &____openedEventHandler_12; }
	inline void set__openedEventHandler_12(Action_1_t0938F713C505FAC39803EE1CD1CFD934F595AA83 * value)
	{
		____openedEventHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____openedEventHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of__closingEventHandler_13() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____closingEventHandler_13)); }
	inline Action_1_t71616651557047C8E5A40938CA6196E7F7FAD1EC * get__closingEventHandler_13() const { return ____closingEventHandler_13; }
	inline Action_1_t71616651557047C8E5A40938CA6196E7F7FAD1EC ** get_address_of__closingEventHandler_13() { return &____closingEventHandler_13; }
	inline void set__closingEventHandler_13(Action_1_t71616651557047C8E5A40938CA6196E7F7FAD1EC * value)
	{
		____closingEventHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closingEventHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of__closedEventHandler_14() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____closedEventHandler_14)); }
	inline Action_1_t9F2869CC81D2D2BBFE9342B9F78D1AD6481B4969 * get__closedEventHandler_14() const { return ____closedEventHandler_14; }
	inline Action_1_t9F2869CC81D2D2BBFE9342B9F78D1AD6481B4969 ** get_address_of__closedEventHandler_14() { return &____closedEventHandler_14; }
	inline void set__closedEventHandler_14(Action_1_t9F2869CC81D2D2BBFE9342B9F78D1AD6481B4969 * value)
	{
		____closedEventHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closedEventHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of__descriptionChangedEventHandler_15() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ____descriptionChangedEventHandler_15)); }
	inline Action_1_tBE08681C6651024785C526AFB0EB4B8C440826ED * get__descriptionChangedEventHandler_15() const { return ____descriptionChangedEventHandler_15; }
	inline Action_1_tBE08681C6651024785C526AFB0EB4B8C440826ED ** get_address_of__descriptionChangedEventHandler_15() { return &____descriptionChangedEventHandler_15; }
	inline void set__descriptionChangedEventHandler_15(Action_1_tBE08681C6651024785C526AFB0EB4B8C440826ED * value)
	{
		____descriptionChangedEventHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptionChangedEventHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_DescriptionChanged_16() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2, ___DescriptionChanged_16)); }
	inline EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * get_DescriptionChanged_16() const { return ___DescriptionChanged_16; }
	inline EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 ** get_address_of_DescriptionChanged_16() { return &___DescriptionChanged_16; }
	inline void set_DescriptionChanged_16(EventHandler_1_tFED630412B31770E1B51E57EF3AC84EC2D8E5A58 * value)
	{
		___DescriptionChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DescriptionChanged_16), (void*)value);
	}
};

struct Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Type> MongoDB.Driver.Core.Servers.Server::__invalidatingExceptions
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * _____invalidatingExceptions_0;

public:
	inline static int32_t get_offset_of___invalidatingExceptions_0() { return static_cast<int32_t>(offsetof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_StaticFields, _____invalidatingExceptions_0)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get___invalidatingExceptions_0() const { return _____invalidatingExceptions_0; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of___invalidatingExceptions_0() { return &_____invalidatingExceptions_0; }
	inline void set___invalidatingExceptions_0(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		_____invalidatingExceptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____invalidatingExceptions_0), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_26;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_17)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_17), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_18)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_18), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_19)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_19), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_20)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_20), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}

	inline static int32_t get_offset_of_ID_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_26)); }
	inline int32_t get_ID_26() const { return ___ID_26; }
	inline int32_t* get_address_of_ID_26() { return &___ID_26; }
	inline void set_ID_26(int32_t value)
	{
		___ID_26 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_41;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_27)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_27() const { return ___AcceptAsyncCallback_27; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_27() { return &___AcceptAsyncCallback_27; }
	inline void set_AcceptAsyncCallback_27(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_28)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_28() const { return ___BeginAcceptCallback_28; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_28() { return &___BeginAcceptCallback_28; }
	inline void set_BeginAcceptCallback_28(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_29() const { return ___BeginAcceptReceiveCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_29() { return &___BeginAcceptReceiveCallback_29; }
	inline void set_BeginAcceptReceiveCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_30() const { return ___ConnectAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_30() { return &___ConnectAsyncCallback_30; }
	inline void set_ConnectAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_31() const { return ___BeginConnectCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_31() { return &___BeginConnectCallback_31; }
	inline void set_BeginConnectCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_32)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_32() const { return ___DisconnectAsyncCallback_32; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_32() { return &___DisconnectAsyncCallback_32; }
	inline void set_DisconnectAsyncCallback_32(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_33)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_33() const { return ___BeginDisconnectCallback_33; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_33() { return &___BeginDisconnectCallback_33; }
	inline void set_BeginDisconnectCallback_33(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_34)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_34() const { return ___ReceiveAsyncCallback_34; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_34() { return &___ReceiveAsyncCallback_34; }
	inline void set_ReceiveAsyncCallback_34(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_35)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_35() const { return ___BeginReceiveCallback_35; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_35() { return &___BeginReceiveCallback_35; }
	inline void set_BeginReceiveCallback_35(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_36() const { return ___BeginReceiveGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_36() { return &___BeginReceiveGenericCallback_36; }
	inline void set_BeginReceiveGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_37() const { return ___ReceiveFromAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_37() { return &___ReceiveFromAsyncCallback_37; }
	inline void set_ReceiveFromAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_37), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_38() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_38)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_38() const { return ___BeginReceiveFromCallback_38; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_38() { return &___BeginReceiveFromCallback_38; }
	inline void set_BeginReceiveFromCallback_38(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_39() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_39)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_39() const { return ___SendAsyncCallback_39; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_39() { return &___SendAsyncCallback_39; }
	inline void set_SendAsyncCallback_39(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_39), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_40() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_40)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_40() const { return ___BeginSendGenericCallback_40; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_40() { return &___BeginSendGenericCallback_40; }
	inline void set_BeginSendGenericCallback_40(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_40), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_41() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_41)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_41() const { return ___SendToAsyncCallback_41; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_41() { return &___SendToAsyncCallback_41; }
	inline void set_SendToAsyncCallback_41(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_41), (void*)value);
	}
};


// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeFindHandle
struct SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};

struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_StaticFields
{
public:
	// Microsoft.Win32.SafeHandles.SafeProcessHandle Microsoft.Win32.SafeHandles.SafeProcessHandle::InvalidHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___InvalidHandle_6;

public:
	inline static int32_t get_offset_of_InvalidHandle_6() { return static_cast<int32_t>(offsetof(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_StaticFields, ___InvalidHandle_6)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_InvalidHandle_6() const { return ___InvalidHandle_6; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_InvalidHandle_6() { return &___InvalidHandle_6; }
	inline void set_InvalidHandle_6(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___InvalidHandle_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidHandle_6), (void*)value);
	}
};


// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> System.Net.Sockets.SafeSocketHandle::blocking_threads
	List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * ___blocking_threads_6;
	// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> System.Net.Sockets.SafeSocketHandle::threads_stacktraces
	Dictionary_2_t0CC64FAB51CA131E38CA8D65B07BC0B7DD08D3C5 * ___threads_stacktraces_7;
	// System.Boolean System.Net.Sockets.SafeSocketHandle::in_cleanup
	bool ___in_cleanup_8;

public:
	inline static int32_t get_offset_of_blocking_threads_6() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9, ___blocking_threads_6)); }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * get_blocking_threads_6() const { return ___blocking_threads_6; }
	inline List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 ** get_address_of_blocking_threads_6() { return &___blocking_threads_6; }
	inline void set_blocking_threads_6(List_1_t9F9F5D4A333C8825F92101BF7BB68754EED3B118 * value)
	{
		___blocking_threads_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocking_threads_6), (void*)value);
	}

	inline static int32_t get_offset_of_threads_stacktraces_7() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9, ___threads_stacktraces_7)); }
	inline Dictionary_2_t0CC64FAB51CA131E38CA8D65B07BC0B7DD08D3C5 * get_threads_stacktraces_7() const { return ___threads_stacktraces_7; }
	inline Dictionary_2_t0CC64FAB51CA131E38CA8D65B07BC0B7DD08D3C5 ** get_address_of_threads_stacktraces_7() { return &___threads_stacktraces_7; }
	inline void set_threads_stacktraces_7(Dictionary_2_t0CC64FAB51CA131E38CA8D65B07BC0B7DD08D3C5 * value)
	{
		___threads_stacktraces_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_stacktraces_7), (void*)value);
	}

	inline static int32_t get_offset_of_in_cleanup_8() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9, ___in_cleanup_8)); }
	inline bool get_in_cleanup_8() const { return ___in_cleanup_8; }
	inline bool* get_address_of_in_cleanup_8() { return &___in_cleanup_8; }
	inline void set_in_cleanup_8(bool value)
	{
		___in_cleanup_8 = value;
	}
};

struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_StaticFields
{
public:
	// System.Boolean System.Net.Sockets.SafeSocketHandle::THROW_ON_ABORT_RETRIES
	bool ___THROW_ON_ABORT_RETRIES_11;

public:
	inline static int32_t get_offset_of_THROW_ON_ABORT_RETRIES_11() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_StaticFields, ___THROW_ON_ABORT_RETRIES_11)); }
	inline bool get_THROW_ON_ABORT_RETRIES_11() const { return ___THROW_ON_ABORT_RETRIES_11; }
	inline bool* get_address_of_THROW_ON_ABORT_RETRIES_11() { return &___THROW_ON_ABORT_RETRIES_11; }
	inline void set_THROW_ON_ABORT_RETRIES_11(bool value)
	{
		___THROW_ON_ABORT_RETRIES_11 = value;
	}
};


// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1  : public SafeHandleZeroOrMinusOneIsInvalid_t0C690C7DC958D0C04E529E2BB0F6569956328B45
{
public:

public:
};


// MongoDB.Driver.Core.Clusters.SingleServerCluster
struct SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427  : public Cluster_t23F69D2EB093A3D35E3475BCBA8E4162CBA4F8EE
{
public:
	// MongoDB.Driver.Core.Servers.IClusterableServer MongoDB.Driver.Core.Clusters.SingleServerCluster::_server
	RuntimeObject* ____server_23;
	// MongoDB.Driver.Core.Misc.InterlockedInt32 MongoDB.Driver.Core.Clusters.SingleServerCluster::_state
	InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * ____state_24;
	// System.String MongoDB.Driver.Core.Clusters.SingleServerCluster::_replicaSetName
	String_t* ____replicaSetName_25;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterClosingEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_closingEventHandler
	Action_1_t3F0F7507AF6A97C9F01FD7E000143834A06BD389 * ____closingEventHandler_26;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterClosedEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_closedEventHandler
	Action_1_t2B5EAC736F838247138A10D8685A8DFFC224ECC9 * ____closedEventHandler_27;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterOpeningEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_openingEventHandler
	Action_1_t03A5212D41B8453275EE31FE1E2D07F5316281EA * ____openingEventHandler_28;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterOpenedEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_openedEventHandler
	Action_1_t450BF4AE730A2F98EBFD47D506D2EAB45A55A215 * ____openedEventHandler_29;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterAddingServerEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_addingServerEventHandler
	Action_1_tF3D4C2BCDB540B62875CC5BA18CC3E72BBD30120 * ____addingServerEventHandler_30;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterAddedServerEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_addedServerEventHandler
	Action_1_t5BA32830763674DDE695BCBC065716130CACDF60 * ____addedServerEventHandler_31;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterRemovingServerEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_removingServerEventHandler
	Action_1_t4EA1BFF42FF8F0C734C4FBC0758D75D31BE45664 * ____removingServerEventHandler_32;
	// System.Action`1<MongoDB.Driver.Core.Events.ClusterRemovedServerEvent> MongoDB.Driver.Core.Clusters.SingleServerCluster::_removedServerEventHandler
	Action_1_t158B89165289393D23937F067D5E73293D6E8128 * ____removedServerEventHandler_33;

public:
	inline static int32_t get_offset_of__server_23() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____server_23)); }
	inline RuntimeObject* get__server_23() const { return ____server_23; }
	inline RuntimeObject** get_address_of__server_23() { return &____server_23; }
	inline void set__server_23(RuntimeObject* value)
	{
		____server_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____server_23), (void*)value);
	}

	inline static int32_t get_offset_of__state_24() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____state_24)); }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * get__state_24() const { return ____state_24; }
	inline InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 ** get_address_of__state_24() { return &____state_24; }
	inline void set__state_24(InterlockedInt32_t160FF6D1DACDB2E1E5BD4E526069052A4BE7D050 * value)
	{
		____state_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____state_24), (void*)value);
	}

	inline static int32_t get_offset_of__replicaSetName_25() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____replicaSetName_25)); }
	inline String_t* get__replicaSetName_25() const { return ____replicaSetName_25; }
	inline String_t** get_address_of__replicaSetName_25() { return &____replicaSetName_25; }
	inline void set__replicaSetName_25(String_t* value)
	{
		____replicaSetName_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____replicaSetName_25), (void*)value);
	}

	inline static int32_t get_offset_of__closingEventHandler_26() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____closingEventHandler_26)); }
	inline Action_1_t3F0F7507AF6A97C9F01FD7E000143834A06BD389 * get__closingEventHandler_26() const { return ____closingEventHandler_26; }
	inline Action_1_t3F0F7507AF6A97C9F01FD7E000143834A06BD389 ** get_address_of__closingEventHandler_26() { return &____closingEventHandler_26; }
	inline void set__closingEventHandler_26(Action_1_t3F0F7507AF6A97C9F01FD7E000143834A06BD389 * value)
	{
		____closingEventHandler_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closingEventHandler_26), (void*)value);
	}

	inline static int32_t get_offset_of__closedEventHandler_27() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____closedEventHandler_27)); }
	inline Action_1_t2B5EAC736F838247138A10D8685A8DFFC224ECC9 * get__closedEventHandler_27() const { return ____closedEventHandler_27; }
	inline Action_1_t2B5EAC736F838247138A10D8685A8DFFC224ECC9 ** get_address_of__closedEventHandler_27() { return &____closedEventHandler_27; }
	inline void set__closedEventHandler_27(Action_1_t2B5EAC736F838247138A10D8685A8DFFC224ECC9 * value)
	{
		____closedEventHandler_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closedEventHandler_27), (void*)value);
	}

	inline static int32_t get_offset_of__openingEventHandler_28() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____openingEventHandler_28)); }
	inline Action_1_t03A5212D41B8453275EE31FE1E2D07F5316281EA * get__openingEventHandler_28() const { return ____openingEventHandler_28; }
	inline Action_1_t03A5212D41B8453275EE31FE1E2D07F5316281EA ** get_address_of__openingEventHandler_28() { return &____openingEventHandler_28; }
	inline void set__openingEventHandler_28(Action_1_t03A5212D41B8453275EE31FE1E2D07F5316281EA * value)
	{
		____openingEventHandler_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____openingEventHandler_28), (void*)value);
	}

	inline static int32_t get_offset_of__openedEventHandler_29() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____openedEventHandler_29)); }
	inline Action_1_t450BF4AE730A2F98EBFD47D506D2EAB45A55A215 * get__openedEventHandler_29() const { return ____openedEventHandler_29; }
	inline Action_1_t450BF4AE730A2F98EBFD47D506D2EAB45A55A215 ** get_address_of__openedEventHandler_29() { return &____openedEventHandler_29; }
	inline void set__openedEventHandler_29(Action_1_t450BF4AE730A2F98EBFD47D506D2EAB45A55A215 * value)
	{
		____openedEventHandler_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____openedEventHandler_29), (void*)value);
	}

	inline static int32_t get_offset_of__addingServerEventHandler_30() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____addingServerEventHandler_30)); }
	inline Action_1_tF3D4C2BCDB540B62875CC5BA18CC3E72BBD30120 * get__addingServerEventHandler_30() const { return ____addingServerEventHandler_30; }
	inline Action_1_tF3D4C2BCDB540B62875CC5BA18CC3E72BBD30120 ** get_address_of__addingServerEventHandler_30() { return &____addingServerEventHandler_30; }
	inline void set__addingServerEventHandler_30(Action_1_tF3D4C2BCDB540B62875CC5BA18CC3E72BBD30120 * value)
	{
		____addingServerEventHandler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingServerEventHandler_30), (void*)value);
	}

	inline static int32_t get_offset_of__addedServerEventHandler_31() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____addedServerEventHandler_31)); }
	inline Action_1_t5BA32830763674DDE695BCBC065716130CACDF60 * get__addedServerEventHandler_31() const { return ____addedServerEventHandler_31; }
	inline Action_1_t5BA32830763674DDE695BCBC065716130CACDF60 ** get_address_of__addedServerEventHandler_31() { return &____addedServerEventHandler_31; }
	inline void set__addedServerEventHandler_31(Action_1_t5BA32830763674DDE695BCBC065716130CACDF60 * value)
	{
		____addedServerEventHandler_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addedServerEventHandler_31), (void*)value);
	}

	inline static int32_t get_offset_of__removingServerEventHandler_32() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____removingServerEventHandler_32)); }
	inline Action_1_t4EA1BFF42FF8F0C734C4FBC0758D75D31BE45664 * get__removingServerEventHandler_32() const { return ____removingServerEventHandler_32; }
	inline Action_1_t4EA1BFF42FF8F0C734C4FBC0758D75D31BE45664 ** get_address_of__removingServerEventHandler_32() { return &____removingServerEventHandler_32; }
	inline void set__removingServerEventHandler_32(Action_1_t4EA1BFF42FF8F0C734C4FBC0758D75D31BE45664 * value)
	{
		____removingServerEventHandler_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____removingServerEventHandler_32), (void*)value);
	}

	inline static int32_t get_offset_of__removedServerEventHandler_33() { return static_cast<int32_t>(offsetof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427, ____removedServerEventHandler_33)); }
	inline Action_1_t158B89165289393D23937F067D5E73293D6E8128 * get__removedServerEventHandler_33() const { return ____removedServerEventHandler_33; }
	inline Action_1_t158B89165289393D23937F067D5E73293D6E8128 ** get_address_of__removedServerEventHandler_33() { return &____removedServerEventHandler_33; }
	inline void set__removedServerEventHandler_33(Action_1_t158B89165289393D23937F067D5E73293D6E8128 * value)
	{
		____removedServerEventHandler_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____removedServerEventHandler_33), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Byte System.Single::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Single_System_IConvertible_ToByte_m8FAE4E8EDDF055FF2F17C2C00D091EBAA0099D49 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Single::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Single_System_IConvertible_ToInt16_mBED24FBB9C6465ABAECDC3C894F41B7CF0E6FC6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Single::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Single_System_IConvertible_ToUInt16_mCBB71CEDC4797B00D50B4417A96EC702076C757A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int32 System.Single::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_System_IConvertible_ToInt32_mD144638A230B62184C32B38DFFFDF955353F42AC (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Single::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Single_System_IConvertible_ToUInt32_mF7B0C9FE3652F3FE2E0BDEEC4B90A316099B525E (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Single::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Single_System_IConvertible_ToInt64_mAC0D1AEA698E9A358F503A77DA9C2873465E7ADC (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Single::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Single_System_IConvertible_ToUInt64_m6A235CB0548A46C28B13E14D5F62DEADE7887613 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Single::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Single_System_IConvertible_ToDouble_m103B0F5DD6C36D37816B2524CCFAB7A60F9781E6 (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for MongoDB.Driver.Core.Servers.RoundTripTimeMonitor
struct RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RoundTripTimeMonitor_t6D9A32DC62F47F97FAFA742D47FF16615EEB12DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RuntimeResourceSet_tE6CEE5AD87FD9B32ABB7C6738D4B04104FE5CE3A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA1CryptoServiceProvider
struct SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA1CryptoServiceProvider_tFCC9EF75A0DCF3E1A50E64B525EA9599E5927EF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA1Managed_t72937A3B6F0505550D38C352D60FFA1F220325D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA256Managed_t5ECA26A251A97388C454C9E800850FFA6B3E3D3B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA384Managed_t91B35562A4CB2633AF1D7A1EBED5548033B0DFFA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.SHA512Managed
struct SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SHA512Managed_tBC5F74FC873AB2EDB4E850A9501BD4FFC4CFE8BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeFindHandle
struct SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeFindHandle_t0E0D5349FC3144C1CAB2D20DCD3023B25833B8BD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.SafeGPtrArrayHandle
struct SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeGPtrArrayHandle_tAEC97FDEAA1FFF2E1C1475EECB98B945EF86141A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.SafeStringMarshal
struct SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeStringMarshal_t3F5BD5E96CFBAF124814DED946144CF39A82F11E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.SecureString
struct SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Authentication.Sspi.SecurityContext
struct SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SecurityContext_t928B57D9195BC56D1EE93B2E7A8FD9341D5B932F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Authentication.Sspi.SecurityCredential
struct SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SecurityCredential_tA12E3FB813B14315D68B82E95258F65C3013A325_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Misc.SemaphoreSlimRequest
struct SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SemaphoreSlimRequest_tE5F40BD544B95054D8C34BAE692F23E8F1BCDFFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Servers.Server
struct Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Server_t9466F58EC29670181DDF530CC64446CD1FC307C2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Server_t9466F58EC29670181DDF530CC64446CD1FC307C2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Bindings.ServerChannelSource
struct ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ServerChannelSource_t9810069137ECA2A43345FF4B926E679D67877D97_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Servers.ServerMonitor
struct ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ServerMonitor_t72A52123571018774A0A2A9EF09B0C34C15C5D78_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.ServerSession
struct ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ServerSession_tC09810371E71AA206F26B60FA2CE2DC9623336B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper>, IReference_1_tD4026FABBA608F648777776BC282618C51E2AF46, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tD4026FABBA608F648777776BC282618C51E2AF46::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tD4026FABBA608F648777776BC282618C51E2AF46*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tD4026FABBA608F648777776BC282618C51E2AF46::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m82E1812FB137290B0EE35532E1008D32226FE5F3(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			returnValue = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 8;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToByte_m8FAE4E8EDDF055FF2F17C2C00D091EBAA0099D49((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToInt16_mBED24FBB9C6465ABAECDC3C894F41B7CF0E6FC6A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToUInt16_mCBB71CEDC4797B00D50B4417A96EC702076C757A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			try
			{
				int32_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToInt32_mD144638A230B62184C32B38DFFFDF955353F42AC((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Int32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToUInt32_mF7B0C9FE3652F3FE2E0BDEEC4B90A316099B525E((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToInt64_mAC0D1AEA698E9A358F503A77DA9C2873465E7ADC((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToUInt64_m6A235CB0548A46C28B13E14D5F62DEADE7887613((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			returnValue = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			float value = *static_cast<float*>(UnBox(GetManagedObjectInline(), Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Single_System_IConvertible_ToDouble_m103B0F5DD6C36D37816B2524CCFAB7A60F9781E6((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Single", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Single", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.SingleChunkBuffer
struct SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SingleChunkBuffer_tAF07EB0BFCE94B78037EAE51E1585D0AF1A95BC5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Driver.Core.Clusters.SingleServerCluster
struct SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SingleServerCluster_t5D96D746BA1790F840189285061B2E869705F427_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper>, IReference_1_t6AF48AEDBAB54EEF81D7BE93983928A632CEA6B7, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6AF48AEDBAB54EEF81D7BE93983928A632CEA6B7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6AF48AEDBAB54EEF81D7BE93983928A632CEA6B7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6AF48AEDBAB54EEF81D7BE93983928A632CEA6B7::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4E45D3537EF0FB1FFE8AF3B2DCB63DB98A3A45AA(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  returnValue;
		try
		{
			returnValue = *static_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(UnBox(GetManagedObjectInline(), Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 18;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  returnValue;
		try
		{
			returnValue = *static_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(UnBox(GetManagedObjectInline(), Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Size
struct Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper>, IReference_1_tF1450FE2A758CB62295758B955692AA1A5A3CCA9, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tF1450FE2A758CB62295758B955692AA1A5A3CCA9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tF1450FE2A758CB62295758B955692AA1A5A3CCA9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tF1450FE2A758CB62295758B955692AA1A5A3CCA9::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3496400E5AB203A0F7596D49F46B68601F66DD77(Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5  returnValue;
		try
		{
			returnValue = *static_cast<Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5 *>(UnBox(GetManagedObjectInline(), Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 18;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Size", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Size_tD78415B1E3C5A20EBC460FCFAD9960781E926CE5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_ComCallableWrapper(obj));
}
