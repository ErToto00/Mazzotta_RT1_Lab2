// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rt1_assignment2:srv/SetThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rt1_assignment2/srv/set_threshold.hpp"


#ifndef RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_
#define RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rt1_assignment2/srv/detail/set_threshold__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rt1_assignment2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetThreshold_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetThreshold_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetThreshold_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_generator_traits
{

[[deprecated("use rt1_assignment2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt1_assignment2::srv::SetThreshold_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt1_assignment2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt1_assignment2::srv::to_yaml() instead")]]
inline std::string to_yaml(const rt1_assignment2::srv::SetThreshold_Request & msg)
{
  return rt1_assignment2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rt1_assignment2::srv::SetThreshold_Request>()
{
  return "rt1_assignment2::srv::SetThreshold_Request";
}

template<>
inline const char * name<rt1_assignment2::srv::SetThreshold_Request>()
{
  return "rt1_assignment2/srv/SetThreshold_Request";
}

template<>
struct has_fixed_size<rt1_assignment2::srv::SetThreshold_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rt1_assignment2::srv::SetThreshold_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rt1_assignment2::srv::SetThreshold_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rt1_assignment2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetThreshold_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetThreshold_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetThreshold_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_generator_traits
{

[[deprecated("use rt1_assignment2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt1_assignment2::srv::SetThreshold_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt1_assignment2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt1_assignment2::srv::to_yaml() instead")]]
inline std::string to_yaml(const rt1_assignment2::srv::SetThreshold_Response & msg)
{
  return rt1_assignment2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rt1_assignment2::srv::SetThreshold_Response>()
{
  return "rt1_assignment2::srv::SetThreshold_Response";
}

template<>
inline const char * name<rt1_assignment2::srv::SetThreshold_Response>()
{
  return "rt1_assignment2/srv/SetThreshold_Response";
}

template<>
struct has_fixed_size<rt1_assignment2::srv::SetThreshold_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rt1_assignment2::srv::SetThreshold_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rt1_assignment2::srv::SetThreshold_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace rt1_assignment2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetThreshold_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const SetThreshold_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetThreshold_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rt1_assignment2

namespace rosidl_generator_traits
{

[[deprecated("use rt1_assignment2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt1_assignment2::srv::SetThreshold_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt1_assignment2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt1_assignment2::srv::to_yaml() instead")]]
inline std::string to_yaml(const rt1_assignment2::srv::SetThreshold_Event & msg)
{
  return rt1_assignment2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rt1_assignment2::srv::SetThreshold_Event>()
{
  return "rt1_assignment2::srv::SetThreshold_Event";
}

template<>
inline const char * name<rt1_assignment2::srv::SetThreshold_Event>()
{
  return "rt1_assignment2/srv/SetThreshold_Event";
}

template<>
struct has_fixed_size<rt1_assignment2::srv::SetThreshold_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rt1_assignment2::srv::SetThreshold_Event>
  : std::integral_constant<bool, has_bounded_size<rt1_assignment2::srv::SetThreshold_Request>::value && has_bounded_size<rt1_assignment2::srv::SetThreshold_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<rt1_assignment2::srv::SetThreshold_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rt1_assignment2::srv::SetThreshold>()
{
  return "rt1_assignment2::srv::SetThreshold";
}

template<>
inline const char * name<rt1_assignment2::srv::SetThreshold>()
{
  return "rt1_assignment2/srv/SetThreshold";
}

template<>
struct has_fixed_size<rt1_assignment2::srv::SetThreshold>
  : std::integral_constant<
    bool,
    has_fixed_size<rt1_assignment2::srv::SetThreshold_Request>::value &&
    has_fixed_size<rt1_assignment2::srv::SetThreshold_Response>::value
  >
{
};

template<>
struct has_bounded_size<rt1_assignment2::srv::SetThreshold>
  : std::integral_constant<
    bool,
    has_bounded_size<rt1_assignment2::srv::SetThreshold_Request>::value &&
    has_bounded_size<rt1_assignment2::srv::SetThreshold_Response>::value
  >
{
};

template<>
struct is_service<rt1_assignment2::srv::SetThreshold>
  : std::true_type
{
};

template<>
struct is_service_request<rt1_assignment2::srv::SetThreshold_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rt1_assignment2::srv::SetThreshold_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RT1_ASSIGNMENT2__SRV__DETAIL__SET_THRESHOLD__TRAITS_HPP_
