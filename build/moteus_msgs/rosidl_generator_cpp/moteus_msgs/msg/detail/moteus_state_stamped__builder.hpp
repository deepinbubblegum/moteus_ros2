// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__BUILDER_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moteus_msgs/msg/detail/moteus_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moteus_msgs
{

namespace msg
{

namespace builder
{

class Init_MoteusStateStamped_state
{
public:
  explicit Init_MoteusStateStamped_state(::moteus_msgs::msg::MoteusStateStamped & msg)
  : msg_(msg)
  {}
  ::moteus_msgs::msg::MoteusStateStamped state(::moteus_msgs::msg::MoteusStateStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusStateStamped msg_;
};

class Init_MoteusStateStamped_header
{
public:
  Init_MoteusStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoteusStateStamped_state header(::moteus_msgs::msg::MoteusStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MoteusStateStamped_state(msg_);
  }

private:
  ::moteus_msgs::msg::MoteusStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moteus_msgs::msg::MoteusStateStamped>()
{
  return moteus_msgs::msg::builder::Init_MoteusStateStamped_header();
}

}  // namespace moteus_msgs

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__BUILDER_HPP_
