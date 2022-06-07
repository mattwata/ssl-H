// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grsim_replacement.proto

#ifndef PROTOBUF_INCLUDED_grsim_5freplacement_2eproto
#define PROTOBUF_INCLUDED_grsim_5freplacement_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_grsim_5freplacement_2eproto 

namespace protobuf_grsim_5freplacement_2eproto {
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
}  // namespace protobuf_grsim_5freplacement_2eproto
namespace ssl_protos {
namespace grsim {
class Ball;
class BallDefaultTypeInternal;
extern BallDefaultTypeInternal _Ball_default_instance_;
class Replacement;
class ReplacementDefaultTypeInternal;
extern ReplacementDefaultTypeInternal _Replacement_default_instance_;
class Robot;
class RobotDefaultTypeInternal;
extern RobotDefaultTypeInternal _Robot_default_instance_;
}  // namespace grsim
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::grsim::Ball* Arena::CreateMaybeMessage<::ssl_protos::grsim::Ball>(Arena*);
template<> ::ssl_protos::grsim::Replacement* Arena::CreateMaybeMessage<::ssl_protos::grsim::Replacement>(Arena*);
template<> ::ssl_protos::grsim::Robot* Arena::CreateMaybeMessage<::ssl_protos::grsim::Robot>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace grsim {

// ===================================================================

class Robot : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.grsim.Robot) */ {
 public:
  Robot();
  virtual ~Robot();

  Robot(const Robot& from);

  inline Robot& operator=(const Robot& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Robot(Robot&& from) noexcept
    : Robot() {
    *this = ::std::move(from);
  }

  inline Robot& operator=(Robot&& from) noexcept {
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
  static const Robot& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robot* internal_default_instance() {
    return reinterpret_cast<const Robot*>(
               &_Robot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Robot* other);
  friend void swap(Robot& a, Robot& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Robot* New() const final {
    return CreateMaybeMessage<Robot>(NULL);
  }

  Robot* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Robot>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Robot& from);
  void MergeFrom(const Robot& from);
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
  void InternalSwap(Robot* other);
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

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // required double dir = 3;
  bool has_dir() const;
  void clear_dir();
  static const int kDirFieldNumber = 3;
  double dir() const;
  void set_dir(double value);

  // required uint32 id = 4;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 4;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required bool yellowteam = 5;
  bool has_yellowteam() const;
  void clear_yellowteam();
  static const int kYellowteamFieldNumber = 5;
  bool yellowteam() const;
  void set_yellowteam(bool value);

  // optional bool turnon = 6;
  bool has_turnon() const;
  void clear_turnon();
  static const int kTurnonFieldNumber = 6;
  bool turnon() const;
  void set_turnon(bool value);

  // @@protoc_insertion_point(class_scope:ssl_protos.grsim.Robot)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_dir();
  void clear_has_dir();
  void set_has_id();
  void clear_has_id();
  void set_has_yellowteam();
  void clear_has_yellowteam();
  void set_has_turnon();
  void clear_has_turnon();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  double dir_;
  ::google::protobuf::uint32 id_;
  bool yellowteam_;
  bool turnon_;
  friend struct ::protobuf_grsim_5freplacement_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Ball : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.grsim.Ball) */ {
 public:
  Ball();
  virtual ~Ball();

  Ball(const Ball& from);

  inline Ball& operator=(const Ball& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Ball(Ball&& from) noexcept
    : Ball() {
    *this = ::std::move(from);
  }

  inline Ball& operator=(Ball&& from) noexcept {
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
  static const Ball& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Ball* internal_default_instance() {
    return reinterpret_cast<const Ball*>(
               &_Ball_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Ball* other);
  friend void swap(Ball& a, Ball& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Ball* New() const final {
    return CreateMaybeMessage<Ball>(NULL);
  }

  Ball* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Ball>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Ball& from);
  void MergeFrom(const Ball& from);
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
  void InternalSwap(Ball* other);
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

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // required double vx = 3;
  bool has_vx() const;
  void clear_vx();
  static const int kVxFieldNumber = 3;
  double vx() const;
  void set_vx(double value);

  // required double vy = 4;
  bool has_vy() const;
  void clear_vy();
  static const int kVyFieldNumber = 4;
  double vy() const;
  void set_vy(double value);

  // @@protoc_insertion_point(class_scope:ssl_protos.grsim.Ball)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_vx();
  void clear_has_vx();
  void set_has_vy();
  void clear_has_vy();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  double vx_;
  double vy_;
  friend struct ::protobuf_grsim_5freplacement_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Replacement : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.grsim.Replacement) */ {
 public:
  Replacement();
  virtual ~Replacement();

  Replacement(const Replacement& from);

  inline Replacement& operator=(const Replacement& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Replacement(Replacement&& from) noexcept
    : Replacement() {
    *this = ::std::move(from);
  }

  inline Replacement& operator=(Replacement&& from) noexcept {
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
  static const Replacement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Replacement* internal_default_instance() {
    return reinterpret_cast<const Replacement*>(
               &_Replacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Replacement* other);
  friend void swap(Replacement& a, Replacement& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Replacement* New() const final {
    return CreateMaybeMessage<Replacement>(NULL);
  }

  Replacement* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Replacement>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Replacement& from);
  void MergeFrom(const Replacement& from);
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
  void InternalSwap(Replacement* other);
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

  // repeated .ssl_protos.grsim.Robot robots = 2;
  int robots_size() const;
  void clear_robots();
  static const int kRobotsFieldNumber = 2;
  ::ssl_protos::grsim::Robot* mutable_robots(int index);
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::Robot >*
      mutable_robots();
  const ::ssl_protos::grsim::Robot& robots(int index) const;
  ::ssl_protos::grsim::Robot* add_robots();
  const ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::Robot >&
      robots() const;

  // optional .ssl_protos.grsim.Ball ball = 1;
  bool has_ball() const;
  void clear_ball();
  static const int kBallFieldNumber = 1;
  private:
  const ::ssl_protos::grsim::Ball& _internal_ball() const;
  public:
  const ::ssl_protos::grsim::Ball& ball() const;
  ::ssl_protos::grsim::Ball* release_ball();
  ::ssl_protos::grsim::Ball* mutable_ball();
  void set_allocated_ball(::ssl_protos::grsim::Ball* ball);

  // @@protoc_insertion_point(class_scope:ssl_protos.grsim.Replacement)
 private:
  void set_has_ball();
  void clear_has_ball();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::Robot > robots_;
  ::ssl_protos::grsim::Ball* ball_;
  friend struct ::protobuf_grsim_5freplacement_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Robot

// required double x = 1;
inline bool Robot::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Robot::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Robot::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Robot::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Robot::x() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.x)
  return x_;
}
inline void Robot::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.x)
}

// required double y = 2;
inline bool Robot::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Robot::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Robot::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Robot::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Robot::y() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.y)
  return y_;
}
inline void Robot::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.y)
}

// required double dir = 3;
inline bool Robot::has_dir() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Robot::set_has_dir() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Robot::clear_has_dir() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Robot::clear_dir() {
  dir_ = 0;
  clear_has_dir();
}
inline double Robot::dir() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.dir)
  return dir_;
}
inline void Robot::set_dir(double value) {
  set_has_dir();
  dir_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.dir)
}

// required uint32 id = 4;
inline bool Robot::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Robot::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Robot::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Robot::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Robot::id() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.id)
  return id_;
}
inline void Robot::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.id)
}

// required bool yellowteam = 5;
inline bool Robot::has_yellowteam() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Robot::set_has_yellowteam() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Robot::clear_has_yellowteam() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Robot::clear_yellowteam() {
  yellowteam_ = false;
  clear_has_yellowteam();
}
inline bool Robot::yellowteam() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.yellowteam)
  return yellowteam_;
}
inline void Robot::set_yellowteam(bool value) {
  set_has_yellowteam();
  yellowteam_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.yellowteam)
}

// optional bool turnon = 6;
inline bool Robot::has_turnon() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Robot::set_has_turnon() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Robot::clear_has_turnon() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Robot::clear_turnon() {
  turnon_ = false;
  clear_has_turnon();
}
inline bool Robot::turnon() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Robot.turnon)
  return turnon_;
}
inline void Robot::set_turnon(bool value) {
  set_has_turnon();
  turnon_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Robot.turnon)
}

// -------------------------------------------------------------------

// Ball

// required double x = 1;
inline bool Ball::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ball::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ball::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ball::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Ball::x() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Ball.x)
  return x_;
}
inline void Ball::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Ball.x)
}

// required double y = 2;
inline bool Ball::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Ball::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Ball::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Ball::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Ball::y() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Ball.y)
  return y_;
}
inline void Ball::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Ball.y)
}

// required double vx = 3;
inline bool Ball::has_vx() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Ball::set_has_vx() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Ball::clear_has_vx() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Ball::clear_vx() {
  vx_ = 0;
  clear_has_vx();
}
inline double Ball::vx() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Ball.vx)
  return vx_;
}
inline void Ball::set_vx(double value) {
  set_has_vx();
  vx_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Ball.vx)
}

// required double vy = 4;
inline bool Ball::has_vy() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Ball::set_has_vy() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Ball::clear_has_vy() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Ball::clear_vy() {
  vy_ = 0;
  clear_has_vy();
}
inline double Ball::vy() const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Ball.vy)
  return vy_;
}
inline void Ball::set_vy(double value) {
  set_has_vy();
  vy_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.grsim.Ball.vy)
}

// -------------------------------------------------------------------

// Replacement

// optional .ssl_protos.grsim.Ball ball = 1;
inline bool Replacement::has_ball() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Replacement::set_has_ball() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Replacement::clear_has_ball() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Replacement::clear_ball() {
  if (ball_ != NULL) ball_->Clear();
  clear_has_ball();
}
inline const ::ssl_protos::grsim::Ball& Replacement::_internal_ball() const {
  return *ball_;
}
inline const ::ssl_protos::grsim::Ball& Replacement::ball() const {
  const ::ssl_protos::grsim::Ball* p = ball_;
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Replacement.ball)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::grsim::Ball*>(
      &::ssl_protos::grsim::_Ball_default_instance_);
}
inline ::ssl_protos::grsim::Ball* Replacement::release_ball() {
  // @@protoc_insertion_point(field_release:ssl_protos.grsim.Replacement.ball)
  clear_has_ball();
  ::ssl_protos::grsim::Ball* temp = ball_;
  ball_ = NULL;
  return temp;
}
inline ::ssl_protos::grsim::Ball* Replacement::mutable_ball() {
  set_has_ball();
  if (ball_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::grsim::Ball>(GetArenaNoVirtual());
    ball_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.grsim.Replacement.ball)
  return ball_;
}
inline void Replacement::set_allocated_ball(::ssl_protos::grsim::Ball* ball) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete ball_;
  }
  if (ball) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      ball = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    set_has_ball();
  } else {
    clear_has_ball();
  }
  ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.grsim.Replacement.ball)
}

// repeated .ssl_protos.grsim.Robot robots = 2;
inline int Replacement::robots_size() const {
  return robots_.size();
}
inline void Replacement::clear_robots() {
  robots_.Clear();
}
inline ::ssl_protos::grsim::Robot* Replacement::mutable_robots(int index) {
  // @@protoc_insertion_point(field_mutable:ssl_protos.grsim.Replacement.robots)
  return robots_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::Robot >*
Replacement::mutable_robots() {
  // @@protoc_insertion_point(field_mutable_list:ssl_protos.grsim.Replacement.robots)
  return &robots_;
}
inline const ::ssl_protos::grsim::Robot& Replacement::robots(int index) const {
  // @@protoc_insertion_point(field_get:ssl_protos.grsim.Replacement.robots)
  return robots_.Get(index);
}
inline ::ssl_protos::grsim::Robot* Replacement::add_robots() {
  // @@protoc_insertion_point(field_add:ssl_protos.grsim.Replacement.robots)
  return robots_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ssl_protos::grsim::Robot >&
Replacement::robots() const {
  // @@protoc_insertion_point(field_list:ssl_protos.grsim.Replacement.robots)
  return robots_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grsim
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_grsim_5freplacement_2eproto