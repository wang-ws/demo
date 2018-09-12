// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: single_bytes.proto

#include "single_bytes.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class BytesExample1DefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BytesExample1>
      _instance;
} _BytesExample1_default_instance_;
namespace protobuf_single_5fbytes_2eproto {
static void InitDefaultsBytesExample1() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_BytesExample1_default_instance_;
    new (ptr) ::BytesExample1();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::BytesExample1::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_BytesExample1 =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBytesExample1}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_BytesExample1.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BytesExample1, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BytesExample1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::BytesExample1, repeatedbytesval_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::BytesExample1)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_BytesExample1_default_instance_),
};

static void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "single_bytes.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

static void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

static void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022single_bytes.proto\")\n\rBytesExample1\022\030\n"
      "\020repeatedBytesVal\030\001 \003(\014"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "single_bytes.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_single_5fbytes_2eproto

// ===================================================================

void BytesExample1::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BytesExample1::kRepeatedBytesValFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BytesExample1::BytesExample1()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_single_5fbytes_2eproto::scc_info_BytesExample1.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:BytesExample1)
}
BytesExample1::BytesExample1(const BytesExample1& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      repeatedbytesval_(from.repeatedbytesval_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:BytesExample1)
}

void BytesExample1::SharedCtor() {
}

BytesExample1::~BytesExample1() {
  // @@protoc_insertion_point(destructor:BytesExample1)
  SharedDtor();
}

void BytesExample1::SharedDtor() {
}

void BytesExample1::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* BytesExample1::descriptor() {
  ::protobuf_single_5fbytes_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_single_5fbytes_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BytesExample1& BytesExample1::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_single_5fbytes_2eproto::scc_info_BytesExample1.base);
  return *internal_default_instance();
}


void BytesExample1::Clear() {
// @@protoc_insertion_point(message_clear_start:BytesExample1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeatedbytesval_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BytesExample1::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:BytesExample1)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bytes repeatedBytesVal = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_repeatedbytesval()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:BytesExample1)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:BytesExample1)
  return false;
#undef DO_
}

void BytesExample1::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:BytesExample1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes repeatedBytesVal = 1;
  for (int i = 0, n = this->repeatedbytesval_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->repeatedbytesval(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:BytesExample1)
}

::google::protobuf::uint8* BytesExample1::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:BytesExample1)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes repeatedBytesVal = 1;
  for (int i = 0, n = this->repeatedbytesval_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(1, this->repeatedbytesval(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:BytesExample1)
  return target;
}

size_t BytesExample1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:BytesExample1)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated bytes repeatedBytesVal = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->repeatedbytesval_size());
  for (int i = 0, n = this->repeatedbytesval_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->repeatedbytesval(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BytesExample1::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:BytesExample1)
  GOOGLE_DCHECK_NE(&from, this);
  const BytesExample1* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BytesExample1>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:BytesExample1)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:BytesExample1)
    MergeFrom(*source);
  }
}

void BytesExample1::MergeFrom(const BytesExample1& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:BytesExample1)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeatedbytesval_.MergeFrom(from.repeatedbytesval_);
}

void BytesExample1::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:BytesExample1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BytesExample1::CopyFrom(const BytesExample1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:BytesExample1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BytesExample1::IsInitialized() const {
  return true;
}

void BytesExample1::Swap(BytesExample1* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BytesExample1::InternalSwap(BytesExample1* other) {
  using std::swap;
  repeatedbytesval_.InternalSwap(CastToBase(&other->repeatedbytesval_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata BytesExample1::GetMetadata() const {
  protobuf_single_5fbytes_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_single_5fbytes_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::BytesExample1* Arena::CreateMaybeMessage< ::BytesExample1 >(Arena* arena) {
  return Arena::CreateInternal< ::BytesExample1 >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)