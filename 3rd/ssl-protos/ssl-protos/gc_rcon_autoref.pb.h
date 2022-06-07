// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gc_rcon_autoref.proto

#ifndef PROTOBUF_INCLUDED_gc_5frcon_5fautoref_2eproto
#define PROTOBUF_INCLUDED_gc_5frcon_5fautoref_2eproto

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
#include "gc_game_event.pb.h"
#include "gc_rcon.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gc_5frcon_5fautoref_2eproto 

namespace protobuf_gc_5frcon_5fautoref_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_gc_5frcon_5fautoref_2eproto
namespace ssl_protos {
namespace gc {
class AutoRefRegistration;
class AutoRefRegistrationDefaultTypeInternal;
extern AutoRefRegistrationDefaultTypeInternal _AutoRefRegistration_default_instance_;
class AutoRefToController;
class AutoRefToControllerDefaultTypeInternal;
extern AutoRefToControllerDefaultTypeInternal _AutoRefToController_default_instance_;
class ControllerToAutoRef;
class ControllerToAutoRefDefaultTypeInternal;
extern ControllerToAutoRefDefaultTypeInternal _ControllerToAutoRef_default_instance_;
}  // namespace gc
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::gc::AutoRefRegistration* Arena::CreateMaybeMessage<::ssl_protos::gc::AutoRefRegistration>(Arena*);
template<> ::ssl_protos::gc::AutoRefToController* Arena::CreateMaybeMessage<::ssl_protos::gc::AutoRefToController>(Arena*);
template<> ::ssl_protos::gc::ControllerToAutoRef* Arena::CreateMaybeMessage<::ssl_protos::gc::ControllerToAutoRef>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace gc {

// ===================================================================

class AutoRefRegistration : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.AutoRefRegistration) */ {
 public:
  AutoRefRegistration();
  virtual ~AutoRefRegistration();

  AutoRefRegistration(const AutoRefRegistration& from);

  inline AutoRefRegistration& operator=(const AutoRefRegistration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AutoRefRegistration(AutoRefRegistration&& from) noexcept
    : AutoRefRegistration() {
    *this = ::std::move(from);
  }

  inline AutoRefRegistration& operator=(AutoRefRegistration&& from) noexcept {
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
  static const AutoRefRegistration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AutoRefRegistration* internal_default_instance() {
    return reinterpret_cast<const AutoRefRegistration*>(
               &_AutoRefRegistration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AutoRefRegistration* other);
  friend void swap(AutoRefRegistration& a, AutoRefRegistration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AutoRefRegistration* New() const final {
    return CreateMaybeMessage<AutoRefRegistration>(NULL);
  }

  AutoRefRegistration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AutoRefRegistration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AutoRefRegistration& from);
  void MergeFrom(const AutoRefRegistration& from);
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
  void InternalSwap(AutoRefRegistration* other);
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

  // required string identifier = 1;
  bool has_identifier() const;
  void clear_identifier();
  static const int kIdentifierFieldNumber = 1;
  const ::std::string& identifier() const;
  void set_identifier(const ::std::string& value);
  #if LANG_CXX11
  void set_identifier(::std::string&& value);
  #endif
  void set_identifier(const char* value);
  void set_identifier(const char* value, size_t size);
  ::std::string* mutable_identifier();
  ::std::string* release_identifier();
  void set_allocated_identifier(::std::string* identifier);

  // optional .ssl_protos.gc.Signature signature = 2;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 2;
  private:
  const ::ssl_protos::gc::Signature& _internal_signature() const;
  public:
  const ::ssl_protos::gc::Signature& signature() const;
  ::ssl_protos::gc::Signature* release_signature();
  ::ssl_protos::gc::Signature* mutable_signature();
  void set_allocated_signature(::ssl_protos::gc::Signature* signature);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.AutoRefRegistration)
 private:
  void set_has_identifier();
  void clear_has_identifier();
  void set_has_signature();
  void clear_has_signature();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr identifier_;
  ::ssl_protos::gc::Signature* signature_;
  friend struct ::protobuf_gc_5frcon_5fautoref_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AutoRefToController : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.AutoRefToController) */ {
 public:
  AutoRefToController();
  virtual ~AutoRefToController();

  AutoRefToController(const AutoRefToController& from);

  inline AutoRefToController& operator=(const AutoRefToController& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AutoRefToController(AutoRefToController&& from) noexcept
    : AutoRefToController() {
    *this = ::std::move(from);
  }

  inline AutoRefToController& operator=(AutoRefToController&& from) noexcept {
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
  static const AutoRefToController& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AutoRefToController* internal_default_instance() {
    return reinterpret_cast<const AutoRefToController*>(
               &_AutoRefToController_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AutoRefToController* other);
  friend void swap(AutoRefToController& a, AutoRefToController& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AutoRefToController* New() const final {
    return CreateMaybeMessage<AutoRefToController>(NULL);
  }

  AutoRefToController* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AutoRefToController>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AutoRefToController& from);
  void MergeFrom(const AutoRefToController& from);
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
  void InternalSwap(AutoRefToController* other);
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

  // optional .ssl_protos.gc.Signature signature = 1;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 1;
  private:
  const ::ssl_protos::gc::Signature& _internal_signature() const;
  public:
  const ::ssl_protos::gc::Signature& signature() const;
  ::ssl_protos::gc::Signature* release_signature();
  ::ssl_protos::gc::Signature* mutable_signature();
  void set_allocated_signature(::ssl_protos::gc::Signature* signature);

  // optional .ssl_protos.gc.GameEvent game_event = 2;
  bool has_game_event() const;
  void clear_game_event();
  static const int kGameEventFieldNumber = 2;
  private:
  const ::ssl_protos::gc::GameEvent& _internal_game_event() const;
  public:
  const ::ssl_protos::gc::GameEvent& game_event() const;
  ::ssl_protos::gc::GameEvent* release_game_event();
  ::ssl_protos::gc::GameEvent* mutable_game_event();
  void set_allocated_game_event(::ssl_protos::gc::GameEvent* game_event);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.AutoRefToController)
 private:
  void set_has_signature();
  void clear_has_signature();
  void set_has_game_event();
  void clear_has_game_event();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::ssl_protos::gc::Signature* signature_;
  ::ssl_protos::gc::GameEvent* game_event_;
  friend struct ::protobuf_gc_5frcon_5fautoref_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ControllerToAutoRef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.ControllerToAutoRef) */ {
 public:
  ControllerToAutoRef();
  virtual ~ControllerToAutoRef();

  ControllerToAutoRef(const ControllerToAutoRef& from);

  inline ControllerToAutoRef& operator=(const ControllerToAutoRef& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ControllerToAutoRef(ControllerToAutoRef&& from) noexcept
    : ControllerToAutoRef() {
    *this = ::std::move(from);
  }

  inline ControllerToAutoRef& operator=(ControllerToAutoRef&& from) noexcept {
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
  static const ControllerToAutoRef& default_instance();

  enum MsgCase {
    kControllerReply = 1,
    MSG_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ControllerToAutoRef* internal_default_instance() {
    return reinterpret_cast<const ControllerToAutoRef*>(
               &_ControllerToAutoRef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ControllerToAutoRef* other);
  friend void swap(ControllerToAutoRef& a, ControllerToAutoRef& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ControllerToAutoRef* New() const final {
    return CreateMaybeMessage<ControllerToAutoRef>(NULL);
  }

  ControllerToAutoRef* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ControllerToAutoRef>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ControllerToAutoRef& from);
  void MergeFrom(const ControllerToAutoRef& from);
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
  void InternalSwap(ControllerToAutoRef* other);
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

  // optional .ssl_protos.gc.ControllerReply controller_reply = 1;
  bool has_controller_reply() const;
  void clear_controller_reply();
  static const int kControllerReplyFieldNumber = 1;
  private:
  const ::ssl_protos::gc::ControllerReply& _internal_controller_reply() const;
  public:
  const ::ssl_protos::gc::ControllerReply& controller_reply() const;
  ::ssl_protos::gc::ControllerReply* release_controller_reply();
  ::ssl_protos::gc::ControllerReply* mutable_controller_reply();
  void set_allocated_controller_reply(::ssl_protos::gc::ControllerReply* controller_reply);

  void clear_msg();
  MsgCase msg_case() const;
  // @@protoc_insertion_point(class_scope:ssl_protos.gc.ControllerToAutoRef)
 private:
  void set_has_controller_reply();

  inline bool has_msg() const;
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  union MsgUnion {
    MsgUnion() {}
    ::ssl_protos::gc::ControllerReply* controller_reply_;
  } msg_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_gc_5frcon_5fautoref_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AutoRefRegistration

// required string identifier = 1;
inline bool AutoRefRegistration::has_identifier() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AutoRefRegistration::set_has_identifier() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AutoRefRegistration::clear_has_identifier() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AutoRefRegistration::clear_identifier() {
  identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_identifier();
}
inline const ::std::string& AutoRefRegistration::identifier() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.AutoRefRegistration.identifier)
  return identifier_.GetNoArena();
}
inline void AutoRefRegistration::set_identifier(const ::std::string& value) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssl_protos.gc.AutoRefRegistration.identifier)
}
#if LANG_CXX11
inline void AutoRefRegistration::set_identifier(::std::string&& value) {
  set_has_identifier();
  identifier_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssl_protos.gc.AutoRefRegistration.identifier)
}
#endif
inline void AutoRefRegistration::set_identifier(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssl_protos.gc.AutoRefRegistration.identifier)
}
inline void AutoRefRegistration::set_identifier(const char* value, size_t size) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssl_protos.gc.AutoRefRegistration.identifier)
}
inline ::std::string* AutoRefRegistration::mutable_identifier() {
  set_has_identifier();
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.AutoRefRegistration.identifier)
  return identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AutoRefRegistration::release_identifier() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.AutoRefRegistration.identifier)
  if (!has_identifier()) {
    return NULL;
  }
  clear_has_identifier();
  return identifier_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AutoRefRegistration::set_allocated_identifier(::std::string* identifier) {
  if (identifier != NULL) {
    set_has_identifier();
  } else {
    clear_has_identifier();
  }
  identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identifier);
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.AutoRefRegistration.identifier)
}

// optional .ssl_protos.gc.Signature signature = 2;
inline bool AutoRefRegistration::has_signature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AutoRefRegistration::set_has_signature() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AutoRefRegistration::clear_has_signature() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::ssl_protos::gc::Signature& AutoRefRegistration::_internal_signature() const {
  return *signature_;
}
inline const ::ssl_protos::gc::Signature& AutoRefRegistration::signature() const {
  const ::ssl_protos::gc::Signature* p = signature_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.AutoRefRegistration.signature)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::Signature*>(
      &::ssl_protos::gc::_Signature_default_instance_);
}
inline ::ssl_protos::gc::Signature* AutoRefRegistration::release_signature() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.AutoRefRegistration.signature)
  clear_has_signature();
  ::ssl_protos::gc::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::Signature* AutoRefRegistration::mutable_signature() {
  set_has_signature();
  if (signature_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::Signature>(GetArenaNoVirtual());
    signature_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.AutoRefRegistration.signature)
  return signature_;
}
inline void AutoRefRegistration::set_allocated_signature(::ssl_protos::gc::Signature* signature) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(signature_);
  }
  if (signature) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      signature = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, signature, submessage_arena);
    }
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_ = signature;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.AutoRefRegistration.signature)
}

// -------------------------------------------------------------------

// AutoRefToController

// optional .ssl_protos.gc.Signature signature = 1;
inline bool AutoRefToController::has_signature() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AutoRefToController::set_has_signature() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AutoRefToController::clear_has_signature() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::ssl_protos::gc::Signature& AutoRefToController::_internal_signature() const {
  return *signature_;
}
inline const ::ssl_protos::gc::Signature& AutoRefToController::signature() const {
  const ::ssl_protos::gc::Signature* p = signature_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.AutoRefToController.signature)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::Signature*>(
      &::ssl_protos::gc::_Signature_default_instance_);
}
inline ::ssl_protos::gc::Signature* AutoRefToController::release_signature() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.AutoRefToController.signature)
  clear_has_signature();
  ::ssl_protos::gc::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::Signature* AutoRefToController::mutable_signature() {
  set_has_signature();
  if (signature_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::Signature>(GetArenaNoVirtual());
    signature_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.AutoRefToController.signature)
  return signature_;
}
inline void AutoRefToController::set_allocated_signature(::ssl_protos::gc::Signature* signature) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(signature_);
  }
  if (signature) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      signature = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, signature, submessage_arena);
    }
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_ = signature;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.AutoRefToController.signature)
}

// optional .ssl_protos.gc.GameEvent game_event = 2;
inline bool AutoRefToController::has_game_event() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AutoRefToController::set_has_game_event() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AutoRefToController::clear_has_game_event() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::ssl_protos::gc::GameEvent& AutoRefToController::_internal_game_event() const {
  return *game_event_;
}
inline const ::ssl_protos::gc::GameEvent& AutoRefToController::game_event() const {
  const ::ssl_protos::gc::GameEvent* p = game_event_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.AutoRefToController.game_event)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::GameEvent*>(
      &::ssl_protos::gc::_GameEvent_default_instance_);
}
inline ::ssl_protos::gc::GameEvent* AutoRefToController::release_game_event() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.AutoRefToController.game_event)
  clear_has_game_event();
  ::ssl_protos::gc::GameEvent* temp = game_event_;
  game_event_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::GameEvent* AutoRefToController::mutable_game_event() {
  set_has_game_event();
  if (game_event_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::GameEvent>(GetArenaNoVirtual());
    game_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.AutoRefToController.game_event)
  return game_event_;
}
inline void AutoRefToController::set_allocated_game_event(::ssl_protos::gc::GameEvent* game_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(game_event_);
  }
  if (game_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      game_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, game_event, submessage_arena);
    }
    set_has_game_event();
  } else {
    clear_has_game_event();
  }
  game_event_ = game_event;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.AutoRefToController.game_event)
}

// -------------------------------------------------------------------

// ControllerToAutoRef

// optional .ssl_protos.gc.ControllerReply controller_reply = 1;
inline bool ControllerToAutoRef::has_controller_reply() const {
  return msg_case() == kControllerReply;
}
inline void ControllerToAutoRef::set_has_controller_reply() {
  _oneof_case_[0] = kControllerReply;
}
inline const ::ssl_protos::gc::ControllerReply& ControllerToAutoRef::_internal_controller_reply() const {
  return *msg_.controller_reply_;
}
inline ::ssl_protos::gc::ControllerReply* ControllerToAutoRef::release_controller_reply() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.ControllerToAutoRef.controller_reply)
  if (has_controller_reply()) {
    clear_has_msg();
      ::ssl_protos::gc::ControllerReply* temp = msg_.controller_reply_;
    msg_.controller_reply_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ssl_protos::gc::ControllerReply& ControllerToAutoRef::controller_reply() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.ControllerToAutoRef.controller_reply)
  return has_controller_reply()
      ? *msg_.controller_reply_
      : *reinterpret_cast< ::ssl_protos::gc::ControllerReply*>(&::ssl_protos::gc::_ControllerReply_default_instance_);
}
inline ::ssl_protos::gc::ControllerReply* ControllerToAutoRef::mutable_controller_reply() {
  if (!has_controller_reply()) {
    clear_msg();
    set_has_controller_reply();
    msg_.controller_reply_ = CreateMaybeMessage< ::ssl_protos::gc::ControllerReply >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.ControllerToAutoRef.controller_reply)
  return msg_.controller_reply_;
}

inline bool ControllerToAutoRef::has_msg() const {
  return msg_case() != MSG_NOT_SET;
}
inline void ControllerToAutoRef::clear_has_msg() {
  _oneof_case_[0] = MSG_NOT_SET;
}
inline ControllerToAutoRef::MsgCase ControllerToAutoRef::msg_case() const {
  return ControllerToAutoRef::MsgCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gc
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gc_5frcon_5fautoref_2eproto