// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moteus_msgs:msg/MoteusState.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__moteus_msgs__msg__MoteusState __attribute__((deprecated))
#else
# define DEPRECATED__moteus_msgs__msg__MoteusState __declspec(deprecated)
#endif

namespace moteus_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoteusState_
{
  using Type = MoteusState_<ContainerAllocator>;

  explicit MoteusState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
      this->mode = 0l;
      this->position = 0.0;
      this->velocity = 0.0;
      this->torque = 0.0;
      this->voltage = 0.0f;
      this->temperature = 0.0f;
      this->fault = 0l;
    }
  }

  explicit MoteusState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0l;
      this->mode = 0l;
      this->position = 0.0;
      this->velocity = 0.0;
      this->torque = 0.0;
      this->voltage = 0.0f;
      this->temperature = 0.0f;
      this->fault = 0l;
    }
  }

  // field types and members
  using _device_id_type =
    int32_t;
  _device_id_type device_id;
  using _mode_type =
    int32_t;
  _mode_type mode;
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _torque_type =
    double;
  _torque_type torque;
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _fault_type =
    int32_t;
  _fault_type fault;

  // setters for named parameter idiom
  Type & set__device_id(
    const int32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__mode(
    const int32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque(
    const double & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__fault(
    const int32_t & _arg)
  {
    this->fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moteus_msgs::msg::MoteusState_<ContainerAllocator> *;
  using ConstRawPtr =
    const moteus_msgs::msg::MoteusState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moteus_msgs::msg::MoteusState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moteus_msgs__msg__MoteusState
    std::shared_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moteus_msgs__msg__MoteusState
    std::shared_ptr<moteus_msgs::msg::MoteusState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoteusState_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoteusState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoteusState_

// alias to use template instance with default allocator
using MoteusState =
  moteus_msgs::msg::MoteusState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__STRUCT_HPP_
