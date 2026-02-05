// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rt1_assignment2:msg/Info.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/msg/info.hpp"


#ifndef RT1_ASSIGNMENT2__MSG__DETAIL__INFO__TRAITS_HPP_
#define RT1_ASSIGNMENT2__MSG__DETAIL__INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rt1_assignment2/msg/detail/info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rt1_assignment2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Info & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Info & msg, bool use_flow_style = false)
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

}  // namespace rt1_assignment2

namespace rosidl_generator_traits
{

[[deprecated("use rt1_assignment2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt1_assignment2::msg::Info & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt1_assignment2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt1_assignment2::msg::to_yaml() instead")]]
inline std::string to_yaml(const rt1_assignment2::msg::Info & msg)
{
  return rt1_assignment2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rt1_assignment2::msg::Info>()
{
  return "rt1_assignment2::msg::Info";
}

template<>
inline const char * name<rt1_assignment2::msg::Info>()
{
  return "rt1_assignment2/msg/Info";
}

template<>
struct has_fixed_size<rt1_assignment2::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rt1_assignment2::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rt1_assignment2::msg::Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RT1_ASSIGNMENT2__MSG__DETAIL__INFO__TRAITS_HPP_
