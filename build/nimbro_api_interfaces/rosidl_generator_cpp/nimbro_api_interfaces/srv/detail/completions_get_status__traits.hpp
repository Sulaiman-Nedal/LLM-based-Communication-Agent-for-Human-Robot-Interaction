// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetStatus.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__TRAITS_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__TRAITS_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetStatus_Request";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetStatus_Request";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetStatus_Response";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetStatus_Response";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetStatus>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetStatus";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetStatus>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetStatus";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>::value &&
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>::value &&
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>::value
  >
{
};

template<>
struct is_service<nimbro_api_interfaces::srv::CompletionsGetStatus>
  : std::true_type
{
};

template<>
struct is_service_request<nimbro_api_interfaces::srv::CompletionsGetStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nimbro_api_interfaces::srv::CompletionsGetStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_STATUS__TRAITS_HPP_
