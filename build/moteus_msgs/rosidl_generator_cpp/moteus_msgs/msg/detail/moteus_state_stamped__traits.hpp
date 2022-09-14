// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moteus_msgs:msg/MoteusStateStamped.idl
// generated code does not contain a copyright notice

#ifndef MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__TRAITS_HPP_
#define MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moteus_msgs/msg/detail/moteus_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'state'
#include "moteus_msgs/msg/detail/moteus_state__traits.hpp"

namespace moteus_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoteusStateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoteusStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoteusStateStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace moteus_msgs

namespace rosidl_generator_traits
{

[[deprecated("use moteus_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const moteus_msgs::msg::MoteusStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  moteus_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use moteus_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const moteus_msgs::msg::MoteusStateStamped & msg)
{
  return moteus_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<moteus_msgs::msg::MoteusStateStamped>()
{
  return "moteus_msgs::msg::MoteusStateStamped";
}

template<>
inline const char * name<moteus_msgs::msg::MoteusStateStamped>()
{
  return "moteus_msgs/msg/MoteusStateStamped";
}

template<>
struct has_fixed_size<moteus_msgs::msg::MoteusStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moteus_msgs::msg::MoteusStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moteus_msgs::msg::MoteusStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTEUS_MSGS__MSG__DETAIL__MOTEUS_STATE_STAMPED__TRAITS_HPP_
