// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsSetTools.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__TRAITS_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__TRAITS_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_set_tools__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsSetTools_Request>()
{
  return "nimbro_api_interfaces::srv::CompletionsSetTools_Request";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsSetTools_Request>()
{
  return "nimbro_api_interfaces/srv/CompletionsSetTools_Request";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsSetTools_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsSetTools_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsSetTools_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsSetTools_Response>()
{
  return "nimbro_api_interfaces::srv::CompletionsSetTools_Response";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsSetTools_Response>()
{
  return "nimbro_api_interfaces/srv/CompletionsSetTools_Response";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsSetTools_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsSetTools_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsSetTools_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsSetTools>()
{
  return "nimbro_api_interfaces::srv::CompletionsSetTools";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsSetTools>()
{
  return "nimbro_api_interfaces/srv/CompletionsSetTools";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsSetTools>
  : std::integral_constant<
    bool,
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsSetTools_Request>::value &&
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsSetTools_Response>::value
  >
{
};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsSetTools>
  : std::integral_constant<
    bool,
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsSetTools_Request>::value &&
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsSetTools_Response>::value
  >
{
};

template<>
struct is_service<nimbro_api_interfaces::srv::CompletionsSetTools>
  : std::true_type
{
};

template<>
struct is_service_request<nimbro_api_interfaces::srv::CompletionsSetTools_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nimbro_api_interfaces::srv::CompletionsSetTools_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__TRAITS_HPP_
