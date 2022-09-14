// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moteus_msgs:msg/MoteusState.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__BUILDER_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moteus_msgs/msg/detail/moteus_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moteus_msgs
{

namespace msg
{

namespace builder
{

class Init_MoteusState_fault
{
public:
  explicit Init_MoteusState_fault(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  ::moteus_msgs::msg::MoteusState fault(::moteus_msgs::msg::MoteusState::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_temperature
{
public:
  explicit Init_MoteusState_temperature(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_fault temperature(::moteus_msgs::msg::MoteusState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MoteusState_fault(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_voltage
{
public:
  explicit Init_MoteusState_voltage(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_temperature voltage(::moteus_msgs::msg::MoteusState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_MoteusState_temperature(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_torque
{
public:
  explicit Init_MoteusState_torque(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_voltage torque(::moteus_msgs::msg::MoteusState::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_MoteusState_voltage(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_velocity
{
public:
  explicit Init_MoteusState_velocity(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_torque velocity(::moteus_msgs::msg::MoteusState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MoteusState_torque(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_position
{
public:
  explicit Init_MoteusState_position(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_velocity position(::moteus_msgs::msg::MoteusState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MoteusState_velocity(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_mode
{
public:
  explicit Init_MoteusState_mode(::moteus_msgs::msg::MoteusState & msg)
  : msg_(msg)
  {}
  Init_MoteusState_position mode(::moteus_msgs::msg::MoteusState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MoteusState_position(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

class Init_MoteusState_device_id
{
public:
  Init_MoteusState_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoteusState_mode device_id(::moteus_msgs::msg::MoteusState::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_MoteusState_mode(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moteus_msgs::msg::MoteusState>()
{
  return moteus_msgs::msg::builder::Init_MoteusState_device_id();
}

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE__BUILDER_HPP_
