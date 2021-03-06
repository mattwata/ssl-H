// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gc_ci.proto

#ifndef PROTOBUF_INCLUDED_gc_5fci_2eproto
#define PROTOBUF_INCLUDED_gc_5fci_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "vision_wrapper_tracked.pb.h"
#include "gc_api.pb.h"
#include "gc_referee_message.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gc_5fci_2eproto 

namespace protobuf_gc_5fci_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_gc_5fci_2eproto
namespace ssl_protos {
namespace gc {
class CiInput;
class CiInputDefaultTypeInternal;
extern CiInputDefaultTypeInternal _CiInput_default_instance_;
class CiOutput;
class CiOutputDefaultTypeInternal;
extern CiOutputDefaultTypeInternal _CiOutput_default_instance_;
}  // namespace gc
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::gc::CiInput* Arena::CreateMaybeMessage<::ssl_protos::gc::CiInput>(Arena*);
template<> ::ssl_protos::gc::CiOutput* Arena::CreateMaybeMessage<::ssl_protos::gc::CiOutput>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace gc {

// ===================================================================

class CiInput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.CiInput) */ {
 public:
  CiInput();
  virtual ~CiInput();

  CiInput(const CiInput& from);

  inline CiInput& operator=(const CiInput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CiInput(CiInput&& from) noexcept
    : CiInput() {
    *this = ::std::move(from);
  }

  inline CiInput& operator=(CiInput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CiInput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CiInput* internal_default_instance() {
    return reinterpret_cast<const CiInput*>(
               &_CiInput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CiInput* other);
  friend void swap(CiInput& a, CiInput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CiInput* New() const final {
    return CreateMaybeMessage<CiInput>(NULL);
  }

  CiInput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CiInput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CiInput& from);
  void MergeFrom(const CiInput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CiInput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ssl_protos.gc.Input api_inputs = 3;
  int api_inputs_size() const;
  void clear_api_inputs();
  static const int kApiInputsFieldNumber = 3;
  ::ssl_protos::gc::Input* mutable_api_inputs(int index);
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::gc::Input >*
      mutable_api_inputs();
  const ::ssl_protos::gc::Input& api_inputs(int index) const;
  ::ssl_protos::gc::Input* add_api_inputs();
  const ::google::protobuf::RepeatedPtrField< ::ssl_protos::gc::Input >&
      api_inputs() const;

  // optional .ssl_protos.vision.TrackerWrapperPacket tracker_packet = 2;
  bool has_tracker_packet() const;
  void clear_tracker_packet();
  static const int kTrackerPacketFieldNumber = 2;
  private:
  const ::ssl_protos::vision::TrackerWrapperPacket& _internal_tracker_packet() const;
  public:
  const ::ssl_protos::vision::TrackerWrapperPacket& tracker_packet() const;
  ::ssl_protos::vision::TrackerWrapperPacket* release_tracker_packet();
  ::ssl_protos::vision::TrackerWrapperPacket* mutable_tracker_packet();
  void set_allocated_tracker_packet(::ssl_protos::vision::TrackerWrapperPacket* tracker_packet);

  // optional int64 timestamp = 1;
  bool has_timestamp() const;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.CiInput)
 private:
  void set_has_timestamp();
  void clear_has_timestamp();
  void set_has_tracker_packet();
  void clear_has_tracker_packet();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::gc::Input > api_inputs_;
  ::ssl_protos::vision::TrackerWrapperPacket* tracker_packet_;
  ::google::protobuf::int64 timestamp_;
  friend struct ::protobuf_gc_5fci_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CiOutput : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.CiOutput) */ {
 public:
  CiOutput();
  virtual ~CiOutput();

  CiOutput(const CiOutput& from);

  inline CiOutput& operator=(const CiOutput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CiOutput(CiOutput&& from) noexcept
    : CiOutput() {
    *this = ::std::move(from);
  }

  inline CiOutput& operator=(CiOutput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CiOutput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CiOutput* internal_default_instance() {
    return reinterpret_cast<const CiOutput*>(
               &_CiOutput_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(CiOutput* other);
  friend void swap(CiOutput& a, CiOutput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CiOutput* New() const final {
    return CreateMaybeMessage<CiOutput>(NULL);
  }

  CiOutput* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CiOutput>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CiOutput& from);
  void MergeFrom(const CiOutput& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CiOutput* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .ssl_protos.gc.Referee referee_msg = 1;
  bool has_referee_msg() const;
  void clear_referee_msg();
  static const int kRefereeMsgFieldNumber = 1;
  private:
  const ::ssl_protos::gc::Referee& _internal_referee_msg() const;
  public:
  const ::ssl_protos::gc::Referee& referee_msg() const;
  ::ssl_protos::gc::Referee* release_referee_msg();
  ::ssl_protos::gc::Referee* mutable_referee_msg();
  void set_allocated_referee_msg(::ssl_protos::gc::Referee* referee_msg);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.CiOutput)
 private:
  void set_has_referee_msg();
  void clear_has_referee_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::ssl_protos::gc::Referee* referee_msg_;
  friend struct ::protobuf_gc_5fci_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CiInput

// optional int64 timestamp = 1;
inline bool CiInput::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CiInput::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CiInput::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CiInput::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 CiInput::timestamp() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.CiInput.timestamp)
  return timestamp_;
}
inline void CiInput::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.CiInput.timestamp)
}

// optional .ssl_protos.vision.TrackerWrapperPacket tracker_packet = 2;
inline bool CiInput::has_tracker_packet() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CiInput::set_has_tracker_packet() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CiInput::clear_has_tracker_packet() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::ssl_protos::vision::TrackerWrapperPacket& CiInput::_internal_tracker_packet() const {
  return *tracker_packet_;
}
inline const ::ssl_protos::vision::TrackerWrapperPacket& CiInput::tracker_packet() const {
  const ::ssl_protos::vision::TrackerWrapperPacket* p = tracker_packet_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.CiInput.tracker_packet)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::vision::TrackerWrapperPacket*>(
      &::ssl_protos::vision::_TrackerWrapperPacket_default_instance_);
}
inline ::ssl_protos::vision::TrackerWrapperPacket* CiInput::release_tracker_packet() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.CiInput.tracker_packet)
  clear_has_tracker_packet();
  ::ssl_protos::vision::TrackerWrapperPacket* temp = tracker_packet_;
  tracker_packet_ = NULL;
  return temp;
}
inline ::ssl_protos::vision::TrackerWrapperPacket* CiInput::mutable_tracker_packet() {
  set_has_tracker_packet();
  if (tracker_packet_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::vision::TrackerWrapperPacket>(GetArenaNoVirtual());
    tracker_packet_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.CiInput.tracker_packet)
  return tracker_packet_;
}
inline void CiInput::set_allocated_tracker_packet(::ssl_protos::vision::TrackerWrapperPacket* tracker_packet) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(tracker_packet_);
  }
  if (tracker_packet) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      tracker_packet = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, tracker_packet, submessage_arena);
    }
    set_has_tracker_packet();
  } else {
    clear_has_tracker_packet();
  }
  tracker_packet_ = tracker_packet;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.CiInput.tracker_packet)
}

// repeated .ssl_protos.gc.Input api_inputs = 3;
inline int CiInput::api_inputs_size() const {
  return api_inputs_.size();
}
inline ::ssl_protos::gc::Input* CiInput::mutable_api_inputs(int index) {
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.CiInput.api_inputs)
  return api_inputs_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ssl_protos::gc::Input >*
CiInput::mutable_api_inputs() {
  // @@protoc_insertion_point(field_mutable_list:ssl_protos.gc.CiInput.api_inputs)
  return &api_inputs_;
}
inline const ::ssl_protos::gc::Input& CiInput::api_inputs(int index) const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.CiInput.api_inputs)
  return api_inputs_.Get(index);
}
inline ::ssl_protos::gc::Input* CiInput::add_api_inputs() {
  // @@protoc_insertion_point(field_add:ssl_protos.gc.CiInput.api_inputs)
  return api_inputs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ssl_protos::gc::Input >&
CiInput::api_inputs() const {
  // @@protoc_insertion_point(field_list:ssl_protos.gc.CiInput.api_inputs)
  return api_inputs_;
}

// -------------------------------------------------------------------

// CiOutput

// optional .ssl_protos.gc.Referee referee_msg = 1;
inline bool CiOutput::has_referee_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CiOutput::set_has_referee_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CiOutput::clear_has_referee_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::ssl_protos::gc::Referee& CiOutput::_internal_referee_msg() const {
  return *referee_msg_;
}
inline const ::ssl_protos::gc::Referee& CiOutput::referee_msg() const {
  const ::ssl_protos::gc::Referee* p = referee_msg_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.CiOutput.referee_msg)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::Referee*>(
      &::ssl_protos::gc::_Referee_default_instance_);
}
inline ::ssl_protos::gc::Referee* CiOutput::release_referee_msg() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.CiOutput.referee_msg)
  clear_has_referee_msg();
  ::ssl_protos::gc::Referee* temp = referee_msg_;
  referee_msg_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::Referee* CiOutput::mutable_referee_msg() {
  set_has_referee_msg();
  if (referee_msg_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::Referee>(GetArenaNoVirtual());
    referee_msg_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.CiOutput.referee_msg)
  return referee_msg_;
}
inline void CiOutput::set_allocated_referee_msg(::ssl_protos::gc::Referee* referee_msg) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(referee_msg_);
  }
  if (referee_msg) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      referee_msg = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, referee_msg, submessage_arena);
    }
    set_has_referee_msg();
  } else {
    clear_has_referee_msg();
  }
  referee_msg_ = referee_msg;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.CiOutput.referee_msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gc
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gc_5fci_2eproto
