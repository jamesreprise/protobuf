// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/field_mask.proto
// Protobuf C++ Version: 5.29.2-dev

#include "google/protobuf/field_mask.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace google {
namespace protobuf {

inline constexpr FieldMask::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : paths_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR FieldMask::FieldMask(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct FieldMaskDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FieldMaskDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FieldMaskDefaultTypeInternal() {}
  union {
    FieldMask _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FieldMaskDefaultTypeInternal _FieldMask_default_instance_;
}  // namespace protobuf
}  // namespace google
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_google_2fprotobuf_2ffield_5fmask_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2ffield_5fmask_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::google::protobuf::FieldMask, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::google::protobuf::FieldMask, _impl_.paths_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::google::protobuf::FieldMask)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::google::protobuf::_FieldMask_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2ffield_5fmask_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n google/protobuf/field_mask.proto\022\017goog"
    "le.protobuf\"\032\n\tFieldMask\022\r\n\005paths\030\001 \003(\tB"
    "\205\001\n\023com.google.protobufB\016FieldMaskProtoP"
    "\001Z2google.golang.org/protobuf/types/know"
    "n/fieldmaskpb\370\001\001\242\002\003GPB\252\002\036Google.Protobuf"
    ".WellKnownTypesb\006proto3"
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto = {
    false,
    false,
    223,
    descriptor_table_protodef_google_2fprotobuf_2ffield_5fmask_2eproto,
    "google/protobuf/field_mask.proto",
    &descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2ffield_5fmask_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2ffield_5fmask_2eproto,
};
namespace google {
namespace protobuf {
// ===================================================================

class FieldMask::_Internal {
 public:
};

FieldMask::FieldMask(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.protobuf.FieldMask)
}
inline PROTOBUF_NDEBUG_INLINE FieldMask::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::google::protobuf::FieldMask& from_msg)
      : paths_{visibility, arena, from.paths_},
        _cached_size_{0} {}

FieldMask::FieldMask(
    ::google::protobuf::Arena* arena,
    const FieldMask& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  FieldMask* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:google.protobuf.FieldMask)
}
inline PROTOBUF_NDEBUG_INLINE FieldMask::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : paths_{visibility, arena},
        _cached_size_{0} {}

inline void FieldMask::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
FieldMask::~FieldMask() {
  // @@protoc_insertion_point(destructor:google.protobuf.FieldMask)
  SharedDtor(*this);
}
inline void FieldMask::SharedDtor(MessageLite& self) {
  FieldMask& this_ = static_cast<FieldMask&>(self);
  this_._internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  ABSL_DCHECK(this_.GetArena() == nullptr);
  this_._impl_.~Impl_();
}

inline void* FieldMask::PlacementNew_(const void*, void* mem,
                                        ::google::protobuf::Arena* arena) {
  return ::new (mem) FieldMask(arena);
}
constexpr auto FieldMask::InternalNewImpl_() {
  constexpr auto arena_bits = ::google::protobuf::internal::EncodePlacementArenaOffsets({
      PROTOBUF_FIELD_OFFSET(FieldMask, _impl_.paths_) +
          decltype(FieldMask::_impl_.paths_)::
              InternalGetArenaOffset(
                  ::google::protobuf::Message::internal_visibility()),
  });
  if (arena_bits.has_value()) {
    return ::google::protobuf::internal::MessageCreator::ZeroInit(
        sizeof(FieldMask), alignof(FieldMask), *arena_bits);
  } else {
    return ::google::protobuf::internal::MessageCreator(&FieldMask::PlacementNew_,
                                 sizeof(FieldMask),
                                 alignof(FieldMask));
  }
}
PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::internal::ClassDataFull FieldMask::_class_data_ = {
    ::google::protobuf::internal::ClassData{
        &_FieldMask_default_instance_._instance,
        &_table_.header,
        nullptr,  // OnDemandRegisterArenaDtor
        nullptr,  // IsInitialized
        &FieldMask::MergeImpl,
        ::google::protobuf::Message::GetNewImpl<FieldMask>(),
#if defined(PROTOBUF_CUSTOM_VTABLE)
        &FieldMask::SharedDtor,
        ::google::protobuf::Message::GetClearImpl<FieldMask>(), &FieldMask::ByteSizeLong,
            &FieldMask::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
        PROTOBUF_FIELD_OFFSET(FieldMask, _impl_._cached_size_),
        false,
    },
    &FieldMask::kDescriptorMethods,
    &descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto,
    nullptr,  // tracker
};
const ::google::protobuf::internal::ClassData* FieldMask::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 39, 2> FieldMask::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::google::protobuf::FieldMask>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // repeated string paths = 1;
    {::_pbi::TcParser::FastUR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(FieldMask, _impl_.paths_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated string paths = 1;
    {PROTOBUF_FIELD_OFFSET(FieldMask, _impl_.paths_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
  }},
  // no aux_entries
  {{
    "\31\5\0\0\0\0\0\0"
    "google.protobuf.FieldMask"
    "paths"
  }},
};

PROTOBUF_NOINLINE void FieldMask::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.FieldMask)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.paths_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* FieldMask::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const FieldMask& this_ = static_cast<const FieldMask&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* FieldMask::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const FieldMask& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.FieldMask)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // repeated string paths = 1;
          for (int i = 0, n = this_._internal_paths_size(); i < n; ++i) {
            const auto& s = this_._internal_paths().Get(i);
            ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
                s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "google.protobuf.FieldMask.paths");
            target = stream->WriteString(1, s, target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.FieldMask)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t FieldMask::ByteSizeLong(const MessageLite& base) {
          const FieldMask& this_ = static_cast<const FieldMask&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t FieldMask::ByteSizeLong() const {
          const FieldMask& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:google.protobuf.FieldMask)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // repeated string paths = 1;
            {
              total_size +=
                  1 * ::google::protobuf::internal::FromIntSize(this_._internal_paths().size());
              for (int i = 0, n = this_._internal_paths().size(); i < n; ++i) {
                total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
                    this_._internal_paths().Get(i));
              }
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void FieldMask::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<FieldMask*>(&to_msg);
  auto& from = static_cast<const FieldMask&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.FieldMask)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_paths()->MergeFrom(from._internal_paths());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void FieldMask::CopyFrom(const FieldMask& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.FieldMask)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void FieldMask::InternalSwap(FieldMask* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.paths_.InternalSwap(&other->_impl_.paths_);
}

::google::protobuf::Metadata FieldMask::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
