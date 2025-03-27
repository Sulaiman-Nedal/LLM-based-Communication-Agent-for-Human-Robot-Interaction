// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__TRAITS_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__TRAITS_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_manage__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsManage_Request>()
{
  return "nimbro_api_interfaces::srv::CompletionsManage_Request";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsManage_Request>()
{
  return "nimbro_api_interfaces/srv/CompletionsManage_Request";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsManage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsManage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsManage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsManage_Response>()
{
  return "nimbro_api_interfaces::srv::CompletionsManage_Response";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsManage_Response>()
{
  return "nimbro_api_interfaces/srv/CompletionsManage_Response";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsManage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsManage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsManage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsManage>()
{
  return "nimbro_api_interfaces::srv::CompletionsManage";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsManage>()
{
  return "nimbro_api_interfaces/srv/CompletionsManage";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsManage>
  : std::integral_constant<
    bool,
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsManage_Request>::value &&
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsManage_Response>::value
  >
{
};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsManage>
  : std::integral_constant<
    bool,
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsManage_Request>::value &&
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsManage_Response>::value
  >
{
};

template<>
struct is_service<nimbro_api_interfaces::srv::CompletionsManage>
  : std::true_type
{
};

template<>
struct is_service_request<nimbro_api_interfaces::srv::CompletionsManage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nimbro_api_interfaces::srv::CompletionsManage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__TRAITS_HPP_
