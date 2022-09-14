// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moteus_msgs:msg/MoteusState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moteus_msgs/msg/detail/moteus_state__rosidl_typesupport_introspection_c.h"
#include "moteus_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moteus_msgs/msg/detail/moteus_state__functions.h"
#include "moteus_msgs/msg/detail/moteus_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moteus_msgs__msg__MoteusState__init(message_memory);
}

void moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_fini_function(void * message_memory)
{
  moteus_msgs__msg__MoteusState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_member_array[8] = {
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moteus_msgs__msg__MoteusState, fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_members = {
  "moteus_msgs__msg",  // message namespace
  "MoteusState",  // message name
  8,  // number of fields
  sizeof(moteus_msgs__msg__MoteusState),
  moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_member_array,  // message members
  moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_init_function,  // function to initialize message memory (memory has to be allocated)
  moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_type_support_handle = {
  0,
  &moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moteus_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moteus_msgs, msg, MoteusState)() {
  if (!moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_type_support_handle.typesupport_identifier) {
    moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moteus_msgs__msg__MoteusState__rosidl_typesupport_introspection_c__MoteusState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
