// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moteus_msgs:msg/MoteusStateMulti.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "moteus_msgs/msg/detail/moteus_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moteus_msgs__msg__MoteusStateMulti __attribute__((deprecated))
#else
# define DEPRECATED__moteus_msgs__msg__MoteusStateMulti __declspec(deprecated)
#endif

namespace moteus_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoteusStateMulti_
{
  using Type = MoteusStateMulti_<ContainerAllocator>;

  explicit MoteusStateMulti_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MoteusStateMulti_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _state_type =
    std::vector<moteus_msgs::msg::MoteusState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moteus_msgs::msg::MoteusState_<ContainerAllocator>>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const std::vector<moteus_msgs::msg::MoteusState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moteus_msgs::msg::MoteusState_<ContainerAllocator>>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> *;
  using ConstRawPtr =
    const moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moteus_msgs__msg__MoteusStateMulti
    std::shared_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moteus_msgs__msg__MoteusStateMulti
    std::shared_ptr<moteus_msgs::msg::MoteusStateMulti_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoteusStateMulti_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoteusStateMulti_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoteusStateMulti_

// alias to use template instance with default allocator
using MoteusStateMulti =
  moteus_msgs::msg::MoteusStateMulti_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__STRUCT_HPP_
