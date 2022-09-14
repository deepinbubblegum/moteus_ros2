// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moteus_msgs:msg/MoteusStateMulti.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__BUILDER_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moteus_msgs/msg/detail/moteus_state_multi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moteus_msgs
{

namespace msg
{

namespace builder
{

class Init_MoteusStateMulti_state
{
public:
  Init_MoteusStateMulti_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moteus_msgs::msg::MoteusStateMulti state(::moteus_msgs::msg::MoteusStateMulti::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusStateMulti msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moteus_msgs::msg::MoteusStateMulti>()
{
  return moteus_msgs::msg::builder::Init_MoteusStateMulti_state();
}

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_MULTI__BUILDER_HPP_
