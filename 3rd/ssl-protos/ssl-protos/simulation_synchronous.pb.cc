// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: simulation_synchronous.proto

#include "simulation_synchronous.pb.h"

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

namespace protobuf_simulation_5fcontrol_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_simulation_5fcontrol_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_SimulatorCommand;
}  // namespace protobuf_simulation_5fcontrol_2eproto
namespace protobuf_simulation_5frobot_5fcontrol_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_simulation_5frobot_5fcontrol_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_RobotControl;
}  // namespace protobuf_simulation_5frobot_5fcontrol_2eproto
namespace protobuf_simulation_5frobot_5ffeedback_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_simulation_5frobot_5ffeedback_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_RobotControlResponse;
}  // namespace protobuf_simulation_5frobot_5ffeedback_2eproto
namespace protobuf_vision_5fdetection_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_vision_5fdetection_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Frame;
}  // namespace protobuf_vision_5fdetection_2eproto
namespace ssl_protos {
namespace simulation {
class SimulationSyncRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SimulationSyncRequest>
      _instance;
} _SimulationSyncRequest_default_instance_;
class SimulationSyncResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SimulationSyncResponse>
      _instance;
} _SimulationSyncResponse_default_instance_;
}  // namespace simulation
}  // namespace ssl_protos
namespace protobuf_simulation_5fsynchronous_2eproto {
static void InitDefaultsSimulationSyncRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ssl_protos::simulation::_SimulationSyncRequest_default_instance_;
    new (ptr) ::ssl_protos::simulation::SimulationSyncRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ssl_protos::simulation::SimulationSyncRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_SimulationSyncRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSimulationSyncRequest}, {
      &protobuf_simulation_5fcontrol_2eproto::scc_info_SimulatorCommand.base,
      &protobuf_simulation_5frobot_5fcontrol_2eproto::scc_info_RobotControl.base,}};

static void InitDefaultsSimulationSyncResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ssl_protos::simulation::_SimulationSyncResponse_default_instance_;
    new (ptr) ::ssl_protos::simulation::SimulationSyncResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ssl_protos::simulation::SimulationSyncResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_SimulationSyncResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsSimulationSyncResponse}, {
      &protobuf_vision_5fdetection_2eproto::scc_info_Frame.base,
      &protobuf_simulation_5frobot_5ffeedback_2eproto::scc_info_RobotControlResponse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SimulationSyncRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SimulationSyncResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncRequest, sim_step_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncRequest, simulator_command_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncRequest, robot_control_),
  2,
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncResponse, detection_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::simulation::SimulationSyncResponse, robot_control_response_),
  ~0u,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::ssl_protos::simulation::SimulationSyncRequest)},
  { 11, 18, sizeof(::ssl_protos::simulation::SimulationSyncResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ssl_protos::simulation::_SimulationSyncRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::ssl_protos::simulation::_SimulationSyncResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "simulation_synchronous.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034simulation_synchronous.proto\022\025ssl_prot"
      "os.simulation\032\026vision_detection.proto\032\037s"
      "imulation_robot_feedback.proto\032\036simulati"
      "on_robot_control.proto\032\030simulation_contr"
      "ol.proto\"\251\001\n\025SimulationSyncRequest\022\020\n\010si"
      "m_step\030\001 \001(\002\022B\n\021simulator_command\030\002 \001(\0132"
      "\'.ssl_protos.simulation.SimulatorCommand"
      "\022:\n\rrobot_control\030\003 \001(\0132#.ssl_protos.sim"
      "ulation.RobotControl\"\222\001\n\026SimulationSyncR"
      "esponse\022+\n\tdetection\030\001 \003(\0132\030.ssl_protos."
      "vision.Frame\022K\n\026robot_control_response\030\002"
      " \001(\0132+.ssl_protos.simulation.RobotContro"
      "lResponseB8Z6github.com/RoboCup-SSL/ssl-"
      "simulation-protocol/pkg/sim"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 547);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "simulation_synchronous.proto", &protobuf_RegisterTypes);
  ::protobuf_vision_5fdetection_2eproto::AddDescriptors();
  ::protobuf_simulation_5frobot_5ffeedback_2eproto::AddDescriptors();
  ::protobuf_simulation_5frobot_5fcontrol_2eproto::AddDescriptors();
  ::protobuf_simulation_5fcontrol_2eproto::AddDescriptors();
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
}  // namespace protobuf_simulation_5fsynchronous_2eproto
namespace ssl_protos {
namespace simulation {

// ===================================================================

void SimulationSyncRequest::InitAsDefaultInstance() {
  ::ssl_protos::simulation::_SimulationSyncRequest_default_instance_._instance.get_mutable()->simulator_command_ = const_cast< ::ssl_protos::simulation::SimulatorCommand*>(
      ::ssl_protos::simulation::SimulatorCommand::internal_default_instance());
  ::ssl_protos::simulation::_SimulationSyncRequest_default_instance_._instance.get_mutable()->robot_control_ = const_cast< ::ssl_protos::simulation::RobotControl*>(
      ::ssl_protos::simulation::RobotControl::internal_default_instance());
}
void SimulationSyncRequest::clear_simulator_command() {
  if (simulator_command_ != NULL) simulator_command_->Clear();
  clear_has_simulator_command();
}
void SimulationSyncRequest::clear_robot_control() {
  if (robot_control_ != NULL) robot_control_->Clear();
  clear_has_robot_control();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SimulationSyncRequest::kSimStepFieldNumber;
const int SimulationSyncRequest::kSimulatorCommandFieldNumber;
const int SimulationSyncRequest::kRobotControlFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SimulationSyncRequest::SimulationSyncRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_simulation_5fsynchronous_2eproto::scc_info_SimulationSyncRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ssl_protos.simulation.SimulationSyncRequest)
}
SimulationSyncRequest::SimulationSyncRequest(const SimulationSyncRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_simulator_command()) {
    simulator_command_ = new ::ssl_protos::simulation::SimulatorCommand(*from.simulator_command_);
  } else {
    simulator_command_ = NULL;
  }
  if (from.has_robot_control()) {
    robot_control_ = new ::ssl_protos::simulation::RobotControl(*from.robot_control_);
  } else {
    robot_control_ = NULL;
  }
  sim_step_ = from.sim_step_;
  // @@protoc_insertion_point(copy_constructor:ssl_protos.simulation.SimulationSyncRequest)
}

void SimulationSyncRequest::SharedCtor() {
  ::memset(&simulator_command_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sim_step_) -
      reinterpret_cast<char*>(&simulator_command_)) + sizeof(sim_step_));
}

SimulationSyncRequest::~SimulationSyncRequest() {
  // @@protoc_insertion_point(destructor:ssl_protos.simulation.SimulationSyncRequest)
  SharedDtor();
}

void SimulationSyncRequest::SharedDtor() {
  if (this != internal_default_instance()) delete simulator_command_;
  if (this != internal_default_instance()) delete robot_control_;
}

void SimulationSyncRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SimulationSyncRequest::descriptor() {
  ::protobuf_simulation_5fsynchronous_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fsynchronous_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SimulationSyncRequest& SimulationSyncRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_simulation_5fsynchronous_2eproto::scc_info_SimulationSyncRequest.base);
  return *internal_default_instance();
}


void SimulationSyncRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:ssl_protos.simulation.SimulationSyncRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(simulator_command_ != NULL);
      simulator_command_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(robot_control_ != NULL);
      robot_control_->Clear();
    }
  }
  sim_step_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SimulationSyncRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ssl_protos.simulation.SimulationSyncRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float sim_step = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {
          set_has_sim_step();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sim_step_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .ssl_protos.simulation.SimulatorCommand simulator_command = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_simulator_command()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .ssl_protos.simulation.RobotControl robot_control = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_robot_control()));
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
  // @@protoc_insertion_point(parse_success:ssl_protos.simulation.SimulationSyncRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ssl_protos.simulation.SimulationSyncRequest)
  return false;
#undef DO_
}

void SimulationSyncRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ssl_protos.simulation.SimulationSyncRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float sim_step = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->sim_step(), output);
  }

  // optional .ssl_protos.simulation.SimulatorCommand simulator_command = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_simulator_command(), output);
  }

  // optional .ssl_protos.simulation.RobotControl robot_control = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_robot_control(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ssl_protos.simulation.SimulationSyncRequest)
}

::google::protobuf::uint8* SimulationSyncRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ssl_protos.simulation.SimulationSyncRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional float sim_step = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->sim_step(), target);
  }

  // optional .ssl_protos.simulation.SimulatorCommand simulator_command = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_simulator_command(), deterministic, target);
  }

  // optional .ssl_protos.simulation.RobotControl robot_control = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_robot_control(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ssl_protos.simulation.SimulationSyncRequest)
  return target;
}

size_t SimulationSyncRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ssl_protos.simulation.SimulationSyncRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .ssl_protos.simulation.SimulatorCommand simulator_command = 2;
    if (has_simulator_command()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *simulator_command_);
    }

    // optional .ssl_protos.simulation.RobotControl robot_control = 3;
    if (has_robot_control()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *robot_control_);
    }

    // optional float sim_step = 1;
    if (has_sim_step()) {
      total_size += 1 + 4;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SimulationSyncRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ssl_protos.simulation.SimulationSyncRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const SimulationSyncRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SimulationSyncRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ssl_protos.simulation.SimulationSyncRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ssl_protos.simulation.SimulationSyncRequest)
    MergeFrom(*source);
  }
}

void SimulationSyncRequest::MergeFrom(const SimulationSyncRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ssl_protos.simulation.SimulationSyncRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_simulator_command()->::ssl_protos::simulation::SimulatorCommand::MergeFrom(from.simulator_command());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_robot_control()->::ssl_protos::simulation::RobotControl::MergeFrom(from.robot_control());
    }
    if (cached_has_bits & 0x00000004u) {
      sim_step_ = from.sim_step_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SimulationSyncRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ssl_protos.simulation.SimulationSyncRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimulationSyncRequest::CopyFrom(const SimulationSyncRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ssl_protos.simulation.SimulationSyncRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulationSyncRequest::IsInitialized() const {
  if (has_simulator_command()) {
    if (!this->simulator_command_->IsInitialized()) return false;
  }
  if (has_robot_control()) {
    if (!this->robot_control_->IsInitialized()) return false;
  }
  return true;
}

void SimulationSyncRequest::Swap(SimulationSyncRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SimulationSyncRequest::InternalSwap(SimulationSyncRequest* other) {
  using std::swap;
  swap(simulator_command_, other->simulator_command_);
  swap(robot_control_, other->robot_control_);
  swap(sim_step_, other->sim_step_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SimulationSyncRequest::GetMetadata() const {
  protobuf_simulation_5fsynchronous_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fsynchronous_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SimulationSyncResponse::InitAsDefaultInstance() {
  ::ssl_protos::simulation::_SimulationSyncResponse_default_instance_._instance.get_mutable()->robot_control_response_ = const_cast< ::ssl_protos::simulation::RobotControlResponse*>(
      ::ssl_protos::simulation::RobotControlResponse::internal_default_instance());
}
void SimulationSyncResponse::clear_detection() {
  detection_.Clear();
}
void SimulationSyncResponse::clear_robot_control_response() {
  if (robot_control_response_ != NULL) robot_control_response_->Clear();
  clear_has_robot_control_response();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SimulationSyncResponse::kDetectionFieldNumber;
const int SimulationSyncResponse::kRobotControlResponseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SimulationSyncResponse::SimulationSyncResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_simulation_5fsynchronous_2eproto::scc_info_SimulationSyncResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ssl_protos.simulation.SimulationSyncResponse)
}
SimulationSyncResponse::SimulationSyncResponse(const SimulationSyncResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      detection_(from.detection_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_robot_control_response()) {
    robot_control_response_ = new ::ssl_protos::simulation::RobotControlResponse(*from.robot_control_response_);
  } else {
    robot_control_response_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:ssl_protos.simulation.SimulationSyncResponse)
}

void SimulationSyncResponse::SharedCtor() {
  robot_control_response_ = NULL;
}

SimulationSyncResponse::~SimulationSyncResponse() {
  // @@protoc_insertion_point(destructor:ssl_protos.simulation.SimulationSyncResponse)
  SharedDtor();
}

void SimulationSyncResponse::SharedDtor() {
  if (this != internal_default_instance()) delete robot_control_response_;
}

void SimulationSyncResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SimulationSyncResponse::descriptor() {
  ::protobuf_simulation_5fsynchronous_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fsynchronous_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SimulationSyncResponse& SimulationSyncResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_simulation_5fsynchronous_2eproto::scc_info_SimulationSyncResponse.base);
  return *internal_default_instance();
}


void SimulationSyncResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ssl_protos.simulation.SimulationSyncResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  detection_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(robot_control_response_ != NULL);
    robot_control_response_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SimulationSyncResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ssl_protos.simulation.SimulationSyncResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ssl_protos.vision.Frame detection = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_detection()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .ssl_protos.simulation.RobotControlResponse robot_control_response = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_robot_control_response()));
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
  // @@protoc_insertion_point(parse_success:ssl_protos.simulation.SimulationSyncResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ssl_protos.simulation.SimulationSyncResponse)
  return false;
#undef DO_
}

void SimulationSyncResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ssl_protos.simulation.SimulationSyncResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ssl_protos.vision.Frame detection = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->detection_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->detection(static_cast<int>(i)),
      output);
  }

  cached_has_bits = _has_bits_[0];
  // optional .ssl_protos.simulation.RobotControlResponse robot_control_response = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_robot_control_response(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ssl_protos.simulation.SimulationSyncResponse)
}

::google::protobuf::uint8* SimulationSyncResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ssl_protos.simulation.SimulationSyncResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ssl_protos.vision.Frame detection = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->detection_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->detection(static_cast<int>(i)), deterministic, target);
  }

  cached_has_bits = _has_bits_[0];
  // optional .ssl_protos.simulation.RobotControlResponse robot_control_response = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_robot_control_response(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ssl_protos.simulation.SimulationSyncResponse)
  return target;
}

size_t SimulationSyncResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ssl_protos.simulation.SimulationSyncResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .ssl_protos.vision.Frame detection = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->detection_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->detection(static_cast<int>(i)));
    }
  }

  // optional .ssl_protos.simulation.RobotControlResponse robot_control_response = 2;
  if (has_robot_control_response()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *robot_control_response_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SimulationSyncResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ssl_protos.simulation.SimulationSyncResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const SimulationSyncResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SimulationSyncResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ssl_protos.simulation.SimulationSyncResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ssl_protos.simulation.SimulationSyncResponse)
    MergeFrom(*source);
  }
}

void SimulationSyncResponse::MergeFrom(const SimulationSyncResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ssl_protos.simulation.SimulationSyncResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  detection_.MergeFrom(from.detection_);
  if (from.has_robot_control_response()) {
    mutable_robot_control_response()->::ssl_protos::simulation::RobotControlResponse::MergeFrom(from.robot_control_response());
  }
}

void SimulationSyncResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ssl_protos.simulation.SimulationSyncResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimulationSyncResponse::CopyFrom(const SimulationSyncResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ssl_protos.simulation.SimulationSyncResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulationSyncResponse::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->detection())) return false;
  if (has_robot_control_response()) {
    if (!this->robot_control_response_->IsInitialized()) return false;
  }
  return true;
}

void SimulationSyncResponse::Swap(SimulationSyncResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SimulationSyncResponse::InternalSwap(SimulationSyncResponse* other) {
  using std::swap;
  CastToBase(&detection_)->InternalSwap(CastToBase(&other->detection_));
  swap(robot_control_response_, other->robot_control_response_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SimulationSyncResponse::GetMetadata() const {
  protobuf_simulation_5fsynchronous_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_simulation_5fsynchronous_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace simulation
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ssl_protos::simulation::SimulationSyncRequest* Arena::CreateMaybeMessage< ::ssl_protos::simulation::SimulationSyncRequest >(Arena* arena) {
  return Arena::CreateInternal< ::ssl_protos::simulation::SimulationSyncRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ssl_protos::simulation::SimulationSyncResponse* Arena::CreateMaybeMessage< ::ssl_protos::simulation::SimulationSyncResponse >(Arena* arena) {
  return Arena::CreateInternal< ::ssl_protos::simulation::SimulationSyncResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)