// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moteus_msgs/msg/detail/moteus_state_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moteus_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MoteusStateStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moteus_msgs::msg::MoteusStateStamped(_init);
}

void MoteusStateStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moteus_msgs::msg::MoteusStateStamped *>(message_memory);
  typed_message->~MoteusStateStamped();
}

size_t size_function__MoteusStateStamped__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moteus_msgs::msg::MoteusState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MoteusStateStamped__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moteus_msgs::msg::MoteusState> *>(untyped_member);
  return &member[index];
}

void * get_function__MoteusStateStamped__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moteus_msgs::msg::MoteusState> *>(untyped_member);
  return &member[index];
}

void fetch_function__MoteusStateStamped__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moteus_msgs::msg::MoteusState *>(
    get_const_function__MoteusStateStamped__state(untyped_member, index));
  auto & value = *reinterpret_cast<moteus_msgs::msg::MoteusState *>(untyped_value);
  value = item;
}

void assign_function__MoteusStateStamped__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moteus_msgs::msg::MoteusState *>(
    get_function__MoteusStateStamped__state(untyped_member, index));
  const auto & value = *reinterpret_cast<const moteus_msgs::msg::MoteusState *>(untyped_value);
  item = value;
}

void resize_function__MoteusStateStamped__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moteus_msgs::msg::MoteusState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MoteusStateStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs::msg::MoteusStateStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moteus_msgs::msg::MoteusState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs::msg::MoteusStateStamped, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__MoteusStateStamped__state,  // size() function pointer
    get_const_function__MoteusStateStamped__state,  // get_const(index) function pointer
    get_function__MoteusStateStamped__state,  // get(index) function pointer
    fetch_function__MoteusStateStamped__state,  // fetch(index, &value) function pointer
    assign_function__MoteusStateStamped__state,  // assign(index, value) function pointer
    resize_function__MoteusStateStamped__state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MoteusStateStamped_message_members = {
  "moteus_msgs::msg",  // message namespace
  "MoteusStateStamped",  // message name
  2,  // number of fields
  sizeof(moteus_msgs::msg::MoteusStateStamped),
  MoteusStateStamped_message_member_array,  // message members
  MoteusStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  MoteusStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MoteusStateStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MoteusStateStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace moteus_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moteus_msgs::msg::MoteusStateStamped>()
{
  return &::moteus_msgs::msg::rosidl_typesupport_introspection_cpp::MoteusStateStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moteus_msgs, msg, MoteusStateStamped)() {
  return &::moteus_msgs::msg::rosidl_typesupport_introspection_cpp::MoteusStateStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
