// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moteus_msgs:msg/MoteusStateMulti.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moteus_msgs/msg/detail/moteus_state_multi__rosidl_typesupport_introspection_c.h"
#include "moteus_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moteus_msgs/msg/detail/moteus_state_multi__functions.h"
#include "moteus_msgs/msg/detail/moteus_state_multi__struct.h"


// Include directives for member types
// Member `state`
#include "moteus_msgs/msg/moteus_state.h"
// Member `state`
#include "moteus_msgs/msg/detail/moteus_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moteus_msgs__msg__MoteusStateMulti__init(message_memory);
}

void moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_fini_function(void * message_memory)
{
  moteus_msgs__msg__MoteusStateMulti__fini(message_memory);
}

size_t moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__size_function__MoteusStateMulti__state(
  const void * untyped_member)
{
  const moteus_msgs__msg__MoteusState__Sequence * member =
    (const moteus_msgs__msg__MoteusState__Sequence *)(untyped_member);
  return member->size;
}

const void * moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_const_function__MoteusStateMulti__state(
  const void * untyped_member, size_t index)
{
  const moteus_msgs__msg__MoteusState__Sequence * member =
    (const moteus_msgs__msg__MoteusState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_function__MoteusStateMulti__state(
  void * untyped_member, size_t index)
{
  moteus_msgs__msg__MoteusState__Sequence * member =
    (moteus_msgs__msg__MoteusState__Sequence *)(untyped_member);
  return &member->data[index];
}

void moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__fetch_function__MoteusStateMulti__state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moteus_msgs__msg__MoteusState * item =
    ((const moteus_msgs__msg__MoteusState *)
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_const_function__MoteusStateMulti__state(untyped_member, index));
  moteus_msgs__msg__MoteusState * value =
    (moteus_msgs__msg__MoteusState *)(untyped_value);
  *value = *item;
}

void moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__assign_function__MoteusStateMulti__state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moteus_msgs__msg__MoteusState * item =
    ((moteus_msgs__msg__MoteusState *)
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_function__MoteusStateMulti__state(untyped_member, index));
  const moteus_msgs__msg__MoteusState * value =
    (const moteus_msgs__msg__MoteusState *)(untyped_value);
  *item = *value;
}

bool moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__resize_function__MoteusStateMulti__state(
  void * untyped_member, size_t size)
{
  moteus_msgs__msg__MoteusState__Sequence * member =
    (moteus_msgs__msg__MoteusState__Sequence *)(untyped_member);
  moteus_msgs__msg__MoteusState__Sequence__fini(member);
  return moteus_msgs__msg__MoteusState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusStateMulti, state),  // bytes offset in struct
    NULL,  // default value
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__size_function__MoteusStateMulti__state,  // size() function pointer
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_const_function__MoteusStateMulti__state,  // get_const(index) function pointer
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__get_function__MoteusStateMulti__state,  // get(index) function pointer
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__fetch_function__MoteusStateMulti__state,  // fetch(index, &value) function pointer
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__assign_function__MoteusStateMulti__state,  // assign(index, value) function pointer
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__resize_function__MoteusStateMulti__state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_members = {
  "moteus_msgs__msg",  // message namespace
  "MoteusStateMulti",  // message name
  1,  // number of fields
  sizeof(moteus_msgs__msg__MoteusStateMulti),
  moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_member_array,  // message members
  moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_init_function,  // function to initialize message memory (memory has to be allocated)
  moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_type_support_handle = {
  0,
  &moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moteus_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moteus_msgs, msg, MoteusStateMulti)() {
  moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moteus_msgs, msg, MoteusState)();
  if (!moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_type_support_handle.typesupport_identifier) {
    moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moteus_msgs__msg__MoteusStateMulti__rosidl_typesupport_introspection_c__MoteusStateMulti_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif