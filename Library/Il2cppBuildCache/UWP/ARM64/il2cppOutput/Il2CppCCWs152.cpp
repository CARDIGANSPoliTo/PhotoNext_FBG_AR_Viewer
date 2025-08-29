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

// System.Collections.Generic.Dictionary`2<MongoDB.Bson.BsonType,System.Int32>
struct Dictionary_2_t92BFF5FD1D5555FF2BC7205F6AF0CC00E5DEB897;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Func`1<MongoDB.Bson.IO.IElementNameValidator>
struct Func_1_tEAF20040CD193AD8DBFB091C10BFDDA5CEBCACC5;
// System.Collections.Generic.List`1<MongoDB.Bson.BsonElement>
struct List_1_t65369B7DC55D04F98C7DACF037198E28DE216048;
// System.Collections.Generic.List`1<MongoDB.Bson.BsonValue>
struct List_1_t860084BFC654008C50CFB28B49748D89842BABC5;
// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonReaderSettings>
struct Stack_1_t27F0FBD2C3E728869239E385C86EB1993551985C;
// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonWriterSettings>
struct Stack_1_tCE561A4959C2002625EBD77FEEF8D2349623A304;
// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.IElementNameValidator>
struct Stack_1_t8124A24EDEA7EDE36B1377B5D43E95CFF7AB6D64;
// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonChunkPool/ReferenceCountedChunk>
struct Stack_1_t63488288461256D4D1B78CED488F55EB55522029;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Threading.Tasks.BeginEndAwaitableAdapter
struct BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB;
// MongoDB.Bson.IO.BsonBinaryReaderContext
struct BsonBinaryReaderContext_t470CEF476CF64BEBD35ECE260180BE988568B74E;
// MongoDB.Bson.IO.BsonBinaryWriterContext
struct BsonBinaryWriterContext_t8F6C1A3628CE392E40F7FDBC56A9DDA05574738A;
// MongoDB.Bson.BsonDocument
struct BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63;
// MongoDB.Bson.IO.BsonDocumentReaderContext
struct BsonDocumentReaderContext_t07A657F3B558F18D30E3714B1970A62A993E2BD6;
// MongoDB.Bson.IO.BsonDocumentWriterContext
struct BsonDocumentWriterContext_tC112A09516DA29293E864E5B5B7C6B94B040121B;
// MongoDB.Bson.IO.BsonReaderSettings
struct BsonReaderSettings_tCCF886F16CBC4AF24F695AFD5D4E1E9CE4BBFD03;
// MongoDB.Bson.IO.BsonStream
struct BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A;
// MongoDB.Bson.BsonValue
struct BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8;
// MongoDB.Bson.IO.BsonWriterSettings
struct BsonWriterSettings_tA08DDEFC18C70E56A714630F3581A75B2256796D;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// MongoDB.Bson.Serialization.IBsonSerializer
struct IBsonSerializer_t7D0CC1931CBE679132CEB76DF41DB024B1FD3CCB;
// MongoDB.Bson.IO.IElementNameValidator
struct IElementNameValidator_tA13D2E615A1897640D9805BEE4DE2B2FD519D869;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
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
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Boolean>
struct NOVTABLE IReference_1_tDE2C153AC5B9F479ACEF2E813A431870DB47B8DD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8DEEBA2F765CAE5E8C6273AD1A33302DBCD64165(bool* comReturnValue) = 0;
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


// System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ___OutStream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____encoder_4)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_StaticFields, ___Null_0)); }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.Collections.BitArray
struct BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;
	// System.Object System.Collections.BitArray::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_m_array_0() { return static_cast<int32_t>(offsetof(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0, ___m_array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_array_0() const { return ___m_array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_array_0() { return &___m_array_0; }
	inline void set_m_array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_length_1() { return static_cast<int32_t>(offsetof(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0, ___m_length_1)); }
	inline int32_t get_m_length_1() const { return ___m_length_1; }
	inline int32_t* get_address_of_m_length_1() { return &___m_length_1; }
	inline void set_m_length_1(int32_t value)
	{
		___m_length_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Linq.Expressions.BlockExpressionList
struct BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55  : public RuntimeObject
{
public:
	// System.Linq.Expressions.BlockExpression System.Linq.Expressions.BlockExpressionList::_block
	BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ____block_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BlockExpressionList::_arg0
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____arg0_1;

public:
	inline static int32_t get_offset_of__block_0() { return static_cast<int32_t>(offsetof(BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55, ____block_0)); }
	inline BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * get__block_0() const { return ____block_0; }
	inline BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB ** get_address_of__block_0() { return &____block_0; }
	inline void set__block_0(BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * value)
	{
		____block_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____block_0), (void*)value);
	}

	inline static int32_t get_offset_of__arg0_1() { return static_cast<int32_t>(offsetof(BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55, ____arg0_1)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__arg0_1() const { return ____arg0_1; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__arg0_1() { return &____arg0_1; }
	inline void set__arg0_1(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____arg0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arg0_1), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonChunkPool
struct BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonChunkPool/ReferenceCountedChunk> MongoDB.Bson.IO.BsonChunkPool::_chunks
	Stack_1_t63488288461256D4D1B78CED488F55EB55522029 * ____chunks_1;
	// System.Int32 MongoDB.Bson.IO.BsonChunkPool::_chunkSize
	int32_t ____chunkSize_2;
	// System.Boolean MongoDB.Bson.IO.BsonChunkPool::_disposed
	bool ____disposed_3;
	// System.Object MongoDB.Bson.IO.BsonChunkPool::_lock
	RuntimeObject * ____lock_4;
	// System.Int32 MongoDB.Bson.IO.BsonChunkPool::_maxChunkCount
	int32_t ____maxChunkCount_5;

public:
	inline static int32_t get_offset_of__chunks_1() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F, ____chunks_1)); }
	inline Stack_1_t63488288461256D4D1B78CED488F55EB55522029 * get__chunks_1() const { return ____chunks_1; }
	inline Stack_1_t63488288461256D4D1B78CED488F55EB55522029 ** get_address_of__chunks_1() { return &____chunks_1; }
	inline void set__chunks_1(Stack_1_t63488288461256D4D1B78CED488F55EB55522029 * value)
	{
		____chunks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chunks_1), (void*)value);
	}

	inline static int32_t get_offset_of__chunkSize_2() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F, ____chunkSize_2)); }
	inline int32_t get__chunkSize_2() const { return ____chunkSize_2; }
	inline int32_t* get_address_of__chunkSize_2() { return &____chunkSize_2; }
	inline void set__chunkSize_2(int32_t value)
	{
		____chunkSize_2 = value;
	}

	inline static int32_t get_offset_of__disposed_3() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F, ____disposed_3)); }
	inline bool get__disposed_3() const { return ____disposed_3; }
	inline bool* get_address_of__disposed_3() { return &____disposed_3; }
	inline void set__disposed_3(bool value)
	{
		____disposed_3 = value;
	}

	inline static int32_t get_offset_of__lock_4() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F, ____lock_4)); }
	inline RuntimeObject * get__lock_4() const { return ____lock_4; }
	inline RuntimeObject ** get_address_of__lock_4() { return &____lock_4; }
	inline void set__lock_4(RuntimeObject * value)
	{
		____lock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_4), (void*)value);
	}

	inline static int32_t get_offset_of__maxChunkCount_5() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F, ____maxChunkCount_5)); }
	inline int32_t get__maxChunkCount_5() const { return ____maxChunkCount_5; }
	inline int32_t* get_address_of__maxChunkCount_5() { return &____maxChunkCount_5; }
	inline void set__maxChunkCount_5(int32_t value)
	{
		____maxChunkCount_5 = value;
	}
};

struct BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_StaticFields
{
public:
	// MongoDB.Bson.IO.BsonChunkPool MongoDB.Bson.IO.BsonChunkPool::__default
	BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F * _____default_0;

public:
	inline static int32_t get_offset_of___default_0() { return static_cast<int32_t>(offsetof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_StaticFields, _____default_0)); }
	inline BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F * get___default_0() const { return _____default_0; }
	inline BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F ** get_address_of___default_0() { return &_____default_0; }
	inline void set___default_0(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F * value)
	{
		_____default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____default_0), (void*)value);
	}
};


// MongoDB.Bson.BsonValue
struct BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8  : public RuntimeObject
{
public:

public:
};

struct BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<MongoDB.Bson.BsonType,System.Int32> MongoDB.Bson.BsonValue::__bsonTypeSortOrder
	Dictionary_2_t92BFF5FD1D5555FF2BC7205F6AF0CC00E5DEB897 * _____bsonTypeSortOrder_0;

public:
	inline static int32_t get_offset_of___bsonTypeSortOrder_0() { return static_cast<int32_t>(offsetof(BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8_StaticFields, _____bsonTypeSortOrder_0)); }
	inline Dictionary_2_t92BFF5FD1D5555FF2BC7205F6AF0CC00E5DEB897 * get___bsonTypeSortOrder_0() const { return _____bsonTypeSortOrder_0; }
	inline Dictionary_2_t92BFF5FD1D5555FF2BC7205F6AF0CC00E5DEB897 ** get_address_of___bsonTypeSortOrder_0() { return &_____bsonTypeSortOrder_0; }
	inline void set___bsonTypeSortOrder_0(Dictionary_2_t92BFF5FD1D5555FF2BC7205F6AF0CC00E5DEB897 * value)
	{
		_____bsonTypeSortOrder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____bsonTypeSortOrder_0), (void*)value);
	}
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
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


// MongoDB.Bson.BsonArray
struct BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F  : public BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8
{
public:
	// System.Collections.Generic.List`1<MongoDB.Bson.BsonValue> MongoDB.Bson.BsonArray::_values
	List_1_t860084BFC654008C50CFB28B49748D89842BABC5 * ____values_1;

public:
	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F, ____values_1)); }
	inline List_1_t860084BFC654008C50CFB28B49748D89842BABC5 * get__values_1() const { return ____values_1; }
	inline List_1_t860084BFC654008C50CFB28B49748D89842BABC5 ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(List_1_t860084BFC654008C50CFB28B49748D89842BABC5 * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}
};


// MongoDB.Bson.BsonDocument
struct BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63  : public BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8
{
public:
	// System.Collections.Generic.List`1<MongoDB.Bson.BsonElement> MongoDB.Bson.BsonDocument::_elements
	List_1_t65369B7DC55D04F98C7DACF037198E28DE216048 * ____elements_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MongoDB.Bson.BsonDocument::_indexes
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ____indexes_3;
	// System.Boolean MongoDB.Bson.BsonDocument::_allowDuplicateNames
	bool ____allowDuplicateNames_4;

public:
	inline static int32_t get_offset_of__elements_2() { return static_cast<int32_t>(offsetof(BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63, ____elements_2)); }
	inline List_1_t65369B7DC55D04F98C7DACF037198E28DE216048 * get__elements_2() const { return ____elements_2; }
	inline List_1_t65369B7DC55D04F98C7DACF037198E28DE216048 ** get_address_of__elements_2() { return &____elements_2; }
	inline void set__elements_2(List_1_t65369B7DC55D04F98C7DACF037198E28DE216048 * value)
	{
		____elements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elements_2), (void*)value);
	}

	inline static int32_t get_offset_of__indexes_3() { return static_cast<int32_t>(offsetof(BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63, ____indexes_3)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get__indexes_3() const { return ____indexes_3; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of__indexes_3() { return &____indexes_3; }
	inline void set__indexes_3(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		____indexes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indexes_3), (void*)value);
	}

	inline static int32_t get_offset_of__allowDuplicateNames_4() { return static_cast<int32_t>(offsetof(BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63, ____allowDuplicateNames_4)); }
	inline bool get__allowDuplicateNames_4() const { return ____allowDuplicateNames_4; }
	inline bool* get_address_of__allowDuplicateNames_4() { return &____allowDuplicateNames_4; }
	inline void set__allowDuplicateNames_4(bool value)
	{
		____allowDuplicateNames_4 = value;
	}
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


// MongoDB.Bson.IO.BsonReaderState
struct BsonReaderState_t5C670785B54F6BF01B26C1A1E845A5D401AD204C 
{
public:
	// System.Int32 MongoDB.Bson.IO.BsonReaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BsonReaderState_t5C670785B54F6BF01B26C1A1E845A5D401AD204C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MongoDB.Bson.IO.BsonStream
struct BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:

public:
};


// MongoDB.Bson.BsonType
struct BsonType_t323AB888EDE2B4BCF25AE1ECF65A7BC7C99B879F 
{
public:
	// System.Int32 MongoDB.Bson.BsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BsonType_t323AB888EDE2B4BCF25AE1ECF65A7BC7C99B879F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// MongoDB.Bson.IO.BsonWriterState
struct BsonWriterState_t661D38DE6BFF18876CB9A95F992D4981D0C57E73 
{
public:
	// System.Int32 MongoDB.Bson.IO.BsonWriterState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BsonWriterState_t661D38DE6BFF18876CB9A95F992D4981D0C57E73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.BufferedStream
struct BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_5;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_6;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_7;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_8;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_9;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_10;
	// System.Threading.Tasks.BeginEndAwaitableAdapter System.IO.BufferedStream::_beginEndAwaitable
	BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * ____beginEndAwaitable_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastSyncCompletedReadTask_12;

public:
	inline static int32_t get_offset_of__stream_5() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_5() const { return ____stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_5() { return &____stream_5; }
	inline void set__stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_5), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_6() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_6() const { return ____buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_6() { return &____buffer_6; }
	inline void set__buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_7() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____bufferSize_7)); }
	inline int32_t get__bufferSize_7() const { return ____bufferSize_7; }
	inline int32_t* get_address_of__bufferSize_7() { return &____bufferSize_7; }
	inline void set__bufferSize_7(int32_t value)
	{
		____bufferSize_7 = value;
	}

	inline static int32_t get_offset_of__readPos_8() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readPos_8)); }
	inline int32_t get__readPos_8() const { return ____readPos_8; }
	inline int32_t* get_address_of__readPos_8() { return &____readPos_8; }
	inline void set__readPos_8(int32_t value)
	{
		____readPos_8 = value;
	}

	inline static int32_t get_offset_of__readLen_9() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readLen_9)); }
	inline int32_t get__readLen_9() const { return ____readLen_9; }
	inline int32_t* get_address_of__readLen_9() { return &____readLen_9; }
	inline void set__readLen_9(int32_t value)
	{
		____readLen_9 = value;
	}

	inline static int32_t get_offset_of__writePos_10() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____writePos_10)); }
	inline int32_t get__writePos_10() const { return ____writePos_10; }
	inline int32_t* get_address_of__writePos_10() { return &____writePos_10; }
	inline void set__writePos_10(int32_t value)
	{
		____writePos_10 = value;
	}

	inline static int32_t get_offset_of__beginEndAwaitable_11() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____beginEndAwaitable_11)); }
	inline BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * get__beginEndAwaitable_11() const { return ____beginEndAwaitable_11; }
	inline BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F ** get_address_of__beginEndAwaitable_11() { return &____beginEndAwaitable_11; }
	inline void set__beginEndAwaitable_11(BeginEndAwaitableAdapter_t588D0C8DDE0BF9523C8F203EDFD7C4787663804F * value)
	{
		____beginEndAwaitable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____beginEndAwaitable_11), (void*)value);
	}

	inline static int32_t get_offset_of__lastSyncCompletedReadTask_12() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____lastSyncCompletedReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastSyncCompletedReadTask_12() const { return ____lastSyncCompletedReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastSyncCompletedReadTask_12() { return &____lastSyncCompletedReadTask_12; }
	inline void set__lastSyncCompletedReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastSyncCompletedReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSyncCompletedReadTask_12), (void*)value);
	}
};


// MongoDB.Bson.MaterializedOnDemandBsonDocument
struct MaterializedOnDemandBsonDocument_t4565B86CE54B6959922D698706ADD2E9B6B0C2DB  : public BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63
{
public:
	// System.Boolean MongoDB.Bson.MaterializedOnDemandBsonDocument::_disposed
	bool ____disposed_5;
	// System.Boolean MongoDB.Bson.MaterializedOnDemandBsonDocument::_isMaterialized
	bool ____isMaterialized_6;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(MaterializedOnDemandBsonDocument_t4565B86CE54B6959922D698706ADD2E9B6B0C2DB, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__isMaterialized_6() { return static_cast<int32_t>(offsetof(MaterializedOnDemandBsonDocument_t4565B86CE54B6959922D698706ADD2E9B6B0C2DB, ____isMaterialized_6)); }
	inline bool get__isMaterialized_6() const { return ____isMaterialized_6; }
	inline bool* get_address_of__isMaterialized_6() { return &____isMaterialized_6; }
	inline void set__isMaterialized_6(bool value)
	{
		____isMaterialized_6 = value;
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


// MongoDB.Libmongocrypt.BinarySafeHandle
struct BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2  : public SafeHandle_tC07DCA2CABF6988953342757EFB1547363E5A36B
{
public:

public:
};


// MongoDB.Bson.BsonDocumentWrapper
struct BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56  : public MaterializedOnDemandBsonDocument_t4565B86CE54B6959922D698706ADD2E9B6B0C2DB
{
public:
	// System.Object MongoDB.Bson.BsonDocumentWrapper::_wrapped
	RuntimeObject * ____wrapped_7;
	// MongoDB.Bson.Serialization.IBsonSerializer MongoDB.Bson.BsonDocumentWrapper::_serializer
	RuntimeObject* ____serializer_8;

public:
	inline static int32_t get_offset_of__wrapped_7() { return static_cast<int32_t>(offsetof(BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56, ____wrapped_7)); }
	inline RuntimeObject * get__wrapped_7() const { return ____wrapped_7; }
	inline RuntimeObject ** get_address_of__wrapped_7() { return &____wrapped_7; }
	inline void set__wrapped_7(RuntimeObject * value)
	{
		____wrapped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wrapped_7), (void*)value);
	}

	inline static int32_t get_offset_of__serializer_8() { return static_cast<int32_t>(offsetof(BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56, ____serializer_8)); }
	inline RuntimeObject* get__serializer_8() const { return ____serializer_8; }
	inline RuntimeObject** get_address_of__serializer_8() { return &____serializer_8; }
	inline void set__serializer_8(RuntimeObject* value)
	{
		____serializer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializer_8), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonReader
struct BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A  : public RuntimeObject
{
public:
	// System.Boolean MongoDB.Bson.IO.BsonReader::_disposed
	bool ____disposed_0;
	// MongoDB.Bson.IO.BsonReaderSettings MongoDB.Bson.IO.BsonReader::_settings
	BsonReaderSettings_tCCF886F16CBC4AF24F695AFD5D4E1E9CE4BBFD03 * ____settings_1;
	// MongoDB.Bson.IO.BsonReaderState MongoDB.Bson.IO.BsonReader::_state
	int32_t ____state_2;
	// MongoDB.Bson.BsonType MongoDB.Bson.IO.BsonReader::_currentBsonType
	int32_t ____currentBsonType_3;
	// System.String MongoDB.Bson.IO.BsonReader::_currentName
	String_t* ____currentName_4;
	// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonReaderSettings> MongoDB.Bson.IO.BsonReader::_settingsStack
	Stack_1_t27F0FBD2C3E728869239E385C86EB1993551985C * ____settingsStack_5;

public:
	inline static int32_t get_offset_of__disposed_0() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____disposed_0)); }
	inline bool get__disposed_0() const { return ____disposed_0; }
	inline bool* get_address_of__disposed_0() { return &____disposed_0; }
	inline void set__disposed_0(bool value)
	{
		____disposed_0 = value;
	}

	inline static int32_t get_offset_of__settings_1() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____settings_1)); }
	inline BsonReaderSettings_tCCF886F16CBC4AF24F695AFD5D4E1E9CE4BBFD03 * get__settings_1() const { return ____settings_1; }
	inline BsonReaderSettings_tCCF886F16CBC4AF24F695AFD5D4E1E9CE4BBFD03 ** get_address_of__settings_1() { return &____settings_1; }
	inline void set__settings_1(BsonReaderSettings_tCCF886F16CBC4AF24F695AFD5D4E1E9CE4BBFD03 * value)
	{
		____settings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settings_1), (void*)value);
	}

	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____state_2)); }
	inline int32_t get__state_2() const { return ____state_2; }
	inline int32_t* get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(int32_t value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__currentBsonType_3() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____currentBsonType_3)); }
	inline int32_t get__currentBsonType_3() const { return ____currentBsonType_3; }
	inline int32_t* get_address_of__currentBsonType_3() { return &____currentBsonType_3; }
	inline void set__currentBsonType_3(int32_t value)
	{
		____currentBsonType_3 = value;
	}

	inline static int32_t get_offset_of__currentName_4() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____currentName_4)); }
	inline String_t* get__currentName_4() const { return ____currentName_4; }
	inline String_t** get_address_of__currentName_4() { return &____currentName_4; }
	inline void set__currentName_4(String_t* value)
	{
		____currentName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentName_4), (void*)value);
	}

	inline static int32_t get_offset_of__settingsStack_5() { return static_cast<int32_t>(offsetof(BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A, ____settingsStack_5)); }
	inline Stack_1_t27F0FBD2C3E728869239E385C86EB1993551985C * get__settingsStack_5() const { return ____settingsStack_5; }
	inline Stack_1_t27F0FBD2C3E728869239E385C86EB1993551985C ** get_address_of__settingsStack_5() { return &____settingsStack_5; }
	inline void set__settingsStack_5(Stack_1_t27F0FBD2C3E728869239E385C86EB1993551985C * value)
	{
		____settingsStack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settingsStack_5), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonStreamAdapter
struct BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE  : public BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A
{
public:
	// System.Boolean MongoDB.Bson.IO.BsonStreamAdapter::_disposed
	bool ____disposed_5;
	// System.Boolean MongoDB.Bson.IO.BsonStreamAdapter::_ownsStream
	bool ____ownsStream_6;
	// System.IO.Stream MongoDB.Bson.IO.BsonStreamAdapter::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_7;
	// System.Byte[] MongoDB.Bson.IO.BsonStreamAdapter::_temp
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____temp_8;
	// System.Byte[] MongoDB.Bson.IO.BsonStreamAdapter::_tempUtf8
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____tempUtf8_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__ownsStream_6() { return static_cast<int32_t>(offsetof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE, ____ownsStream_6)); }
	inline bool get__ownsStream_6() const { return ____ownsStream_6; }
	inline bool* get_address_of__ownsStream_6() { return &____ownsStream_6; }
	inline void set__ownsStream_6(bool value)
	{
		____ownsStream_6 = value;
	}

	inline static int32_t get_offset_of__stream_7() { return static_cast<int32_t>(offsetof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE, ____stream_7)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_7() const { return ____stream_7; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_7() { return &____stream_7; }
	inline void set__stream_7(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_7), (void*)value);
	}

	inline static int32_t get_offset_of__temp_8() { return static_cast<int32_t>(offsetof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE, ____temp_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__temp_8() const { return ____temp_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__temp_8() { return &____temp_8; }
	inline void set__temp_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____temp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____temp_8), (void*)value);
	}

	inline static int32_t get_offset_of__tempUtf8_9() { return static_cast<int32_t>(offsetof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE, ____tempUtf8_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__tempUtf8_9() const { return ____tempUtf8_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__tempUtf8_9() { return &____tempUtf8_9; }
	inline void set__tempUtf8_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____tempUtf8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tempUtf8_9), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonWriter
struct BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869  : public RuntimeObject
{
public:
	// System.Func`1<MongoDB.Bson.IO.IElementNameValidator> MongoDB.Bson.IO.BsonWriter::_childElementNameValidatorFactory
	Func_1_tEAF20040CD193AD8DBFB091C10BFDDA5CEBCACC5 * ____childElementNameValidatorFactory_0;
	// System.Boolean MongoDB.Bson.IO.BsonWriter::_disposed
	bool ____disposed_1;
	// MongoDB.Bson.IO.IElementNameValidator MongoDB.Bson.IO.BsonWriter::_elementNameValidator
	RuntimeObject* ____elementNameValidator_2;
	// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.IElementNameValidator> MongoDB.Bson.IO.BsonWriter::_elementNameValidatorStack
	Stack_1_t8124A24EDEA7EDE36B1377B5D43E95CFF7AB6D64 * ____elementNameValidatorStack_3;
	// MongoDB.Bson.IO.BsonWriterSettings MongoDB.Bson.IO.BsonWriter::_settings
	BsonWriterSettings_tA08DDEFC18C70E56A714630F3581A75B2256796D * ____settings_4;
	// System.Collections.Generic.Stack`1<MongoDB.Bson.IO.BsonWriterSettings> MongoDB.Bson.IO.BsonWriter::_settingsStack
	Stack_1_tCE561A4959C2002625EBD77FEEF8D2349623A304 * ____settingsStack_5;
	// MongoDB.Bson.IO.BsonWriterState MongoDB.Bson.IO.BsonWriter::_state
	int32_t ____state_6;
	// System.String MongoDB.Bson.IO.BsonWriter::_name
	String_t* ____name_7;
	// System.Int32 MongoDB.Bson.IO.BsonWriter::_serializationDepth
	int32_t ____serializationDepth_8;

public:
	inline static int32_t get_offset_of__childElementNameValidatorFactory_0() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____childElementNameValidatorFactory_0)); }
	inline Func_1_tEAF20040CD193AD8DBFB091C10BFDDA5CEBCACC5 * get__childElementNameValidatorFactory_0() const { return ____childElementNameValidatorFactory_0; }
	inline Func_1_tEAF20040CD193AD8DBFB091C10BFDDA5CEBCACC5 ** get_address_of__childElementNameValidatorFactory_0() { return &____childElementNameValidatorFactory_0; }
	inline void set__childElementNameValidatorFactory_0(Func_1_tEAF20040CD193AD8DBFB091C10BFDDA5CEBCACC5 * value)
	{
		____childElementNameValidatorFactory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childElementNameValidatorFactory_0), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}

	inline static int32_t get_offset_of__elementNameValidator_2() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____elementNameValidator_2)); }
	inline RuntimeObject* get__elementNameValidator_2() const { return ____elementNameValidator_2; }
	inline RuntimeObject** get_address_of__elementNameValidator_2() { return &____elementNameValidator_2; }
	inline void set__elementNameValidator_2(RuntimeObject* value)
	{
		____elementNameValidator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elementNameValidator_2), (void*)value);
	}

	inline static int32_t get_offset_of__elementNameValidatorStack_3() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____elementNameValidatorStack_3)); }
	inline Stack_1_t8124A24EDEA7EDE36B1377B5D43E95CFF7AB6D64 * get__elementNameValidatorStack_3() const { return ____elementNameValidatorStack_3; }
	inline Stack_1_t8124A24EDEA7EDE36B1377B5D43E95CFF7AB6D64 ** get_address_of__elementNameValidatorStack_3() { return &____elementNameValidatorStack_3; }
	inline void set__elementNameValidatorStack_3(Stack_1_t8124A24EDEA7EDE36B1377B5D43E95CFF7AB6D64 * value)
	{
		____elementNameValidatorStack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elementNameValidatorStack_3), (void*)value);
	}

	inline static int32_t get_offset_of__settings_4() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____settings_4)); }
	inline BsonWriterSettings_tA08DDEFC18C70E56A714630F3581A75B2256796D * get__settings_4() const { return ____settings_4; }
	inline BsonWriterSettings_tA08DDEFC18C70E56A714630F3581A75B2256796D ** get_address_of__settings_4() { return &____settings_4; }
	inline void set__settings_4(BsonWriterSettings_tA08DDEFC18C70E56A714630F3581A75B2256796D * value)
	{
		____settings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settings_4), (void*)value);
	}

	inline static int32_t get_offset_of__settingsStack_5() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____settingsStack_5)); }
	inline Stack_1_tCE561A4959C2002625EBD77FEEF8D2349623A304 * get__settingsStack_5() const { return ____settingsStack_5; }
	inline Stack_1_tCE561A4959C2002625EBD77FEEF8D2349623A304 ** get_address_of__settingsStack_5() { return &____settingsStack_5; }
	inline void set__settingsStack_5(Stack_1_tCE561A4959C2002625EBD77FEEF8D2349623A304 * value)
	{
		____settingsStack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____settingsStack_5), (void*)value);
	}

	inline static int32_t get_offset_of__state_6() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____state_6)); }
	inline int32_t get__state_6() const { return ____state_6; }
	inline int32_t* get_address_of__state_6() { return &____state_6; }
	inline void set__state_6(int32_t value)
	{
		____state_6 = value;
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}

	inline static int32_t get_offset_of__serializationDepth_8() { return static_cast<int32_t>(offsetof(BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869, ____serializationDepth_8)); }
	inline int32_t get__serializationDepth_8() const { return ____serializationDepth_8; }
	inline int32_t* get_address_of__serializationDepth_8() { return &____serializationDepth_8; }
	inline void set__serializationDepth_8(int32_t value)
	{
		____serializationDepth_8 = value;
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

// MongoDB.Bson.IO.BsonBinaryReader
struct BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607  : public BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A
{
public:
	// System.IO.Stream MongoDB.Bson.IO.BsonBinaryReader::_baseStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____baseStream_6;
	// MongoDB.Bson.IO.BsonStream MongoDB.Bson.IO.BsonBinaryReader::_bsonStream
	BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * ____bsonStream_7;
	// MongoDB.Bson.IO.BsonBinaryReaderContext MongoDB.Bson.IO.BsonBinaryReader::_context
	BsonBinaryReaderContext_t470CEF476CF64BEBD35ECE260180BE988568B74E * ____context_8;

public:
	inline static int32_t get_offset_of__baseStream_6() { return static_cast<int32_t>(offsetof(BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607, ____baseStream_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__baseStream_6() const { return ____baseStream_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__baseStream_6() { return &____baseStream_6; }
	inline void set__baseStream_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____baseStream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_6), (void*)value);
	}

	inline static int32_t get_offset_of__bsonStream_7() { return static_cast<int32_t>(offsetof(BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607, ____bsonStream_7)); }
	inline BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * get__bsonStream_7() const { return ____bsonStream_7; }
	inline BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A ** get_address_of__bsonStream_7() { return &____bsonStream_7; }
	inline void set__bsonStream_7(BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * value)
	{
		____bsonStream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bsonStream_7), (void*)value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607, ____context_8)); }
	inline BsonBinaryReaderContext_t470CEF476CF64BEBD35ECE260180BE988568B74E * get__context_8() const { return ____context_8; }
	inline BsonBinaryReaderContext_t470CEF476CF64BEBD35ECE260180BE988568B74E ** get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(BsonBinaryReaderContext_t470CEF476CF64BEBD35ECE260180BE988568B74E * value)
	{
		____context_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_8), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonBinaryWriter
struct BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA  : public BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869
{
public:
	// System.IO.Stream MongoDB.Bson.IO.BsonBinaryWriter::_baseStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____baseStream_9;
	// MongoDB.Bson.IO.BsonStream MongoDB.Bson.IO.BsonBinaryWriter::_bsonStream
	BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * ____bsonStream_10;
	// MongoDB.Bson.IO.BsonBinaryWriterContext MongoDB.Bson.IO.BsonBinaryWriter::_context
	BsonBinaryWriterContext_t8F6C1A3628CE392E40F7FDBC56A9DDA05574738A * ____context_11;

public:
	inline static int32_t get_offset_of__baseStream_9() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA, ____baseStream_9)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__baseStream_9() const { return ____baseStream_9; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__baseStream_9() { return &____baseStream_9; }
	inline void set__baseStream_9(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____baseStream_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_9), (void*)value);
	}

	inline static int32_t get_offset_of__bsonStream_10() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA, ____bsonStream_10)); }
	inline BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * get__bsonStream_10() const { return ____bsonStream_10; }
	inline BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A ** get_address_of__bsonStream_10() { return &____bsonStream_10; }
	inline void set__bsonStream_10(BsonStream_tED4591D5572028F4D138A97A5CB2871FF711D97A * value)
	{
		____bsonStream_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bsonStream_10), (void*)value);
	}

	inline static int32_t get_offset_of__context_11() { return static_cast<int32_t>(offsetof(BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA, ____context_11)); }
	inline BsonBinaryWriterContext_t8F6C1A3628CE392E40F7FDBC56A9DDA05574738A * get__context_11() const { return ____context_11; }
	inline BsonBinaryWriterContext_t8F6C1A3628CE392E40F7FDBC56A9DDA05574738A ** get_address_of__context_11() { return &____context_11; }
	inline void set__context_11(BsonBinaryWriterContext_t8F6C1A3628CE392E40F7FDBC56A9DDA05574738A * value)
	{
		____context_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_11), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonDocumentReader
struct BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857  : public BsonReader_tE29BD7E077672A4279CA2E57A695A94C147B3F8A
{
public:
	// MongoDB.Bson.IO.BsonDocumentReaderContext MongoDB.Bson.IO.BsonDocumentReader::_context
	BsonDocumentReaderContext_t07A657F3B558F18D30E3714B1970A62A993E2BD6 * ____context_6;
	// MongoDB.Bson.BsonValue MongoDB.Bson.IO.BsonDocumentReader::_currentValue
	BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8 * ____currentValue_7;

public:
	inline static int32_t get_offset_of__context_6() { return static_cast<int32_t>(offsetof(BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857, ____context_6)); }
	inline BsonDocumentReaderContext_t07A657F3B558F18D30E3714B1970A62A993E2BD6 * get__context_6() const { return ____context_6; }
	inline BsonDocumentReaderContext_t07A657F3B558F18D30E3714B1970A62A993E2BD6 ** get_address_of__context_6() { return &____context_6; }
	inline void set__context_6(BsonDocumentReaderContext_t07A657F3B558F18D30E3714B1970A62A993E2BD6 * value)
	{
		____context_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_6), (void*)value);
	}

	inline static int32_t get_offset_of__currentValue_7() { return static_cast<int32_t>(offsetof(BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857, ____currentValue_7)); }
	inline BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8 * get__currentValue_7() const { return ____currentValue_7; }
	inline BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8 ** get_address_of__currentValue_7() { return &____currentValue_7; }
	inline void set__currentValue_7(BsonValue_tF8DEC5A548A4549506EB44E1BDFDE7DF389DF0F8 * value)
	{
		____currentValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentValue_7), (void*)value);
	}
};


// MongoDB.Bson.IO.BsonDocumentWriter
struct BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502  : public BsonWriter_t7B421646E743DCBE8F337EB5A86EA6AD3F14E869
{
public:
	// MongoDB.Bson.BsonDocument MongoDB.Bson.IO.BsonDocumentWriter::_document
	BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63 * ____document_9;
	// MongoDB.Bson.IO.BsonDocumentWriterContext MongoDB.Bson.IO.BsonDocumentWriter::_context
	BsonDocumentWriterContext_tC112A09516DA29293E864E5B5B7C6B94B040121B * ____context_10;

public:
	inline static int32_t get_offset_of__document_9() { return static_cast<int32_t>(offsetof(BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502, ____document_9)); }
	inline BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63 * get__document_9() const { return ____document_9; }
	inline BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63 ** get_address_of__document_9() { return &____document_9; }
	inline void set__document_9(BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63 * value)
	{
		____document_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____document_9), (void*)value);
	}

	inline static int32_t get_offset_of__context_10() { return static_cast<int32_t>(offsetof(BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502, ____context_10)); }
	inline BsonDocumentWriterContext_tC112A09516DA29293E864E5B5B7C6B94B040121B * get__context_10() const { return ____context_10; }
	inline BsonDocumentWriterContext_tC112A09516DA29293E864E5B5B7C6B94B040121B ** get_address_of__context_10() { return &____context_10; }
	inline void set__context_10(BsonDocumentWriterContext_tC112A09516DA29293E864E5B5B7C6B94B040121B * value)
	{
		____context_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_10), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);



// COM Callable Wrapper for MongoDB.Libmongocrypt.BinarySafeHandle
struct BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BinarySafeHandle_tDFCBA6B57DF8881D9804978F43E59407CAB429F2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.BinaryWriter
struct BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.BitArray
struct BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.BlockExpressionList
struct BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlockExpressionList_tC03E7B0B4BF307F781680AE2B201FFE0CA752D55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper>, IReference_1_tDE2C153AC5B9F479ACEF2E813A431870DB47B8DD, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tDE2C153AC5B9F479ACEF2E813A431870DB47B8DD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tDE2C153AC5B9F479ACEF2E813A431870DB47B8DD*>(this);
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
		interfaceIds[0] = IReference_1_tDE2C153AC5B9F479ACEF2E813A431870DB47B8DD::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8DEEBA2F765CAE5E8C6273AD1A33302DBCD64165(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = *static_cast<bool*>(UnBox(GetManagedObjectInline(), Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var));
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
			returnValue = 11;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = *static_cast<bool*>(UnBox(GetManagedObjectInline(), Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var));
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Boolean", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.BsonArray
struct BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
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
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonArray_t0979F18AA78C9662B336BC039F4F667BC082D74F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonBinaryReader
struct BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonBinaryReader_t37B41815176514F57E75A06BEA35FB6931005607_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonBinaryWriter
struct BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonBinaryWriter_tC3C3E8568719B06B7030A3A5508879C638F0B3BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonChunkPool
struct BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonChunkPool_t62196A1E9DAA6C44C64061CDE88596D9CA18055F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.BsonDocument
struct BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonDocument_t4A17EC67DC765D801A1476F149568733F4C25C63_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonDocumentReader
struct BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonDocumentReader_t00344DA197C34B3AEF2288D3A34DE6C3AE46D857_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.BsonDocumentWrapper
struct BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonDocumentWrapper_t637096DB690059AA6FF7AE1261A4B4870A9D9C56_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonDocumentWriter
struct BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonDocumentWriter_t3BC7BA081B537F5B0365C1A797E3BE9AA4CBE502_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MongoDB.Bson.IO.BsonStreamAdapter
struct BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BsonStreamAdapter_tC6E45AE1FFA66AE6A94D518B0B8C92B45D932AAE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.BufferedStream
struct BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_ComCallableWrapper(obj));
}
