// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grsim_robotstatus.proto

#ifndef PROTOBUF_INCLUDED_grsim_5frobotstatus_2eproto
#define PROTOBUF_INCLUDED_grsim_5frobotstatus_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_grsim_5frobotstatus_2eproto 

namespace protobuf_grsim_5frobotstatus_2eproto {
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
}  // namespace protobuf_grsim_5frobotstatus_2eproto
namespace ssl_protos {
namespace grsim {
class RobotStatus;
class RobotStatusDefaultTypeInternal;
extern RobotStatusDefaultTypeInternal _RobotStatus_default_instance_;
class Status;
class StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace grsim
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::grsim::RobotStatus* Arena::CreateMaybeMessage<::ssl_protos::grsim::RobotStatus>(Arena*);
template<> ::ssl_protos::grsim::Status* Arena::CreateMaybeMessage<::ssl_protos::grsim::Status>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace grsim {

// ===================================================================

class Status : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.grsim.Status) */ {
 public:
  Status();
  virtual ~Status();

  Status(const Status& from);

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(Status&& from) noexcept {
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
  static const Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Status* other);
  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Status* New() const final {
    return CreateMaybeMessage<Status>(NULL);
  }

  Status* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Status>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
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
  void InternalSwap(Status* other);
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

  // repeated .ssl_protos.grsim.RobotStatus robots_status = 1;
  int robots_status_size() const;
  void clear_robots_status();
  static const int kRobotsStatusFieldNumber = 1;
  ::ssl_protos::grsim::RobotStatus* mutable_robots_status(int index);
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::RobotStatus >*
      mutable_robots_status();
  const ::ssl_protos::grsim::RobotStatus& robots_status(int index) const;
  ::ssl_protos::grsim::RobotStatus* add_robots_status();
  const ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::RobotStatus >&
      robots_status() const;

  // @@protoc_insertion_point(class_scope:ssl_protos.grsim.Status)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::RobotStatus > robots_status_;
  friend struct ::protobuf_grsim_5frobotstatus_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class RobotStatus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.grsim.RobotStatus) */ {
 public:
  RobotStatus();
  virtual ~RobotStatus();

  RobotStatus(const RobotStatus& from);

  inline RobotStatus& operator=(const RobotStatus& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RobotStatus(RobotStatus&& from) noexcept
    : RobotStatus() {
    *this = ::std::move(from);
  }

  inline RobotStatus& operator=(RobotStatus&& from) noexcept {
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
  static const RobotStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RobotStatus* internal_default_instance() {
    return reinterpret_cast<const RobotStatus*>(
               &_RobotStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(RobotStatus* other);
  friend void swap(RobotStatus& a, RobotStatus& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RobotStatus* New() const final {
    return CreateMaybeMessage<RobotStatus>(NULL);
  }

  RobotStatus* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RobotStatus>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RobotStatus& from);
  void MergeFrom(const RobotStatus& from);
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
  void InternalSwap(RobotStatus* other);
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

  // required int32 robot_id = 1;
  bool has_robot_id() const;
  void clear_robot_id();
  static const int kRobotIdFieldNumber = 1;
  ::google::protobuf::int32 robot_id() const;
  void set_robot_id(::google::protobuf::int32 value);

  // required bool infrared = 2;
  bool has_infrared() const;
  void clear_infrared();
  static const int kInfraredFieldNumber = 2;
  bool infrared() const;
  void set_infrared(bool value);

  // required bool flat_kick = 3;
  bool has_flat_kick() const;
  void clear_flat_kick();
  static const int kFlatKickFieldNumber = 3;
  bool flat_kick() const;
  void set_flat_kick(bool value);

  // required bool chip_kick = 4;
  bool has_chip_kick() const;
  void clear_chip_kick();
  static const int kChipKickFieldNumber = 4;
  bool chip_kick() const;
  void set_chip_kick(bool value);

  // @@protoc_insertion_point(class_scope:ssl_protos.grsim.RobotStatus)
 private:
  void set_has_robot_id();
  void clear_has_robot_id();
  void set_has_infrared();
  void clear_has_infrared();
  void set_has_flat_kick();
  void clear_has_flat_kick();
  void set_has_chip_kick();
  void clear_has_chip_kick();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 robot_id_;
  bool infrared_;
  bool flat_kick_;
  bool chip_kick_;
  friend struct ::protobuf_grsim_5frobotstatus_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Status

// repeated .ssl_protos.grsim.RobotStatus robots_status = 1;
inline int Status::robots_status_size() const {
  return robots_status_.size();
}
inline void Status::clear_robots_status() {
  robots_status_.Clear();
}
inline ::ssl_protos::grsim::RobotStatus* Status::mutable_robots_status(int index) {
  // @@protoc_insertion_point(field_mutable:ssl_protos.grsim.Status.robots_status)
  return robots_status_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::RobotStatus >*
Status::mutable_robots_status() {
  // @@protoc_insertion_point(field_mutable_list:ssl_protos.grsim.Status.robots_status)
  return &robots_status_;
}
inline const ::ssl_protos::grsim::RobotStatus& Status::robots_status(int index) const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Status.robots_status)
  return robots_status_.Get(index);
}
inline ::ssl_protos::grsim::RobotStatus* Status::add_robots_status() {
  // @@protoc_insertion_point(field_add:ssl_protos.grsim.Status.robots_status)
  return robots_status_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::RobotStatus >&
Status::robots_status() const {
  // @@protoc_insertion_point(field_list:ssl_protos.grsim.Status.robots_status)
  return robots_status_;
}

// -------------------------------------------------------------------

// RobotStatus

// required int32 robot_id = 1;
inline bool RobotStatus::has_robot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RobotStatus::set_has_robot_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RobotStatus::clear_has_robot_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RobotStatus::clear_robot_id() {
  robot_id_ = 0;
  clear_has_robot_id();
}
inline ::google::protobuf::int32 RobotStatus::robot_id() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.RobotStatus.robot_id)
  return robot_id_;
}
inline void RobotStatus::set_robot_id(::google::protobuf::int32 value) {
  set_has_robot_id();
  robot_id_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.RobotStatus.robot_id)
}

// required bool infrared = 2;
inline bool RobotStatus::has_infrared() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RobotStatus::set_has_infrared() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RobotStatus::clear_has_infrared() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RobotStatus::clear_infrared() {
  infrared_ = false;
  clear_has_infrared();
}
inline bool RobotStatus::infrared() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.RobotStatus.infrared)
  return infrared_;
}
inline void RobotStatus::set_infrared(bool value) {
  set_has_infrared();
  infrared_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.RobotStatus.infrared)
}

// required bool flat_kick = 3;
inline bool RobotStatus::has_flat_kick() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RobotStatus::set_has_flat_kick() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RobotStatus::clear_has_flat_kick() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RobotStatus::clear_flat_kick() {
  flat_kick_ = false;
  clear_has_flat_kick();
}
inline bool RobotStatus::flat_kick() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.RobotStatus.flat_kick)
  return flat_kick_;
}
inline void RobotStatus::set_flat_kick(bool value) {
  set_has_flat_kick();
  flat_kick_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.RobotStatus.flat_kick)
}

// required bool chip_kick = 4;
inline bool RobotStatus::has_chip_kick() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RobotStatus::set_has_chip_kick() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RobotStatus::clear_has_chip_kick() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RobotStatus::clear_chip_kick() {
  chip_kick_ = false;
  clear_has_chip_kick();
}
inline bool RobotStatus::chip_kick() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.RobotStatus.chip_kick)
  return chip_kick_;
}
inline void RobotStatus::set_chip_kick(bool value) {
  set_has_chip_kick();
  chip_kick_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.RobotStatus.chip_kick)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grsim
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_grsim_5frobotstatus_2eproto
