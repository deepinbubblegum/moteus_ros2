// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'state'
#include "moteus_msgs/msg/detail/moteus_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moteus_msgs__msg__MoteusStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__moteus_msgs__msg__MoteusStateStamped __declspec(deprecated)
#endif

namespace moteus_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoteusStateStamped_
{
  using Type = MoteusStateStamped_<ContainerAllocator>;

  explicit MoteusStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MoteusStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    std::vector<moteus_msgs::msg::MoteusState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moteus_msgs::msg::MoteusState_<ContainerAllocator>>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<moteus_msgs::msg::MoteusState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moteus_msgs::msg::MoteusState_<ContainerAllocator>>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moteus_msgs__msg__MoteusStateStamped
    std::shared_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moteus_msgs__msg__MoteusStateStamped
    std::shared_ptr<moteus_msgs::msg::MoteusStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoteusStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoteusStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoteusStateStamped_

// alias to use template instance with default allocator
using MoteusStateStamped =
  moteus_msgs::msg::MoteusStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__STRUCT_HPP_
