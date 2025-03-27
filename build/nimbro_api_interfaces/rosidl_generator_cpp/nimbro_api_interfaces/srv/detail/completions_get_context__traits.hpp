// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetContext.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__TRAITS_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__TRAITS_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_context__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetContext_Request>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetContext_Request";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetContext_Request>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetContext_Request";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetContext_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetContext_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsGetContext_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetContext_Response>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetContext_Response";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetContext_Response>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetContext_Response";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetContext_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetContext_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::srv::CompletionsGetContext_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::srv::CompletionsGetContext>()
{
  return "nimbro_api_interfaces::srv::CompletionsGetContext";
}

template<>
inline const char * name<nimbro_api_interfaces::srv::CompletionsGetContext>()
{
  return "nimbro_api_interfaces/srv/CompletionsGetContext";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetContext>
  : std::integral_constant<
    bool,
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetContext_Request>::value &&
    has_fixed_size<nimbro_api_interfaces::srv::CompletionsGetContext_Response>::value
  >
{
};

template<>
struct has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetContext>
  : std::integral_constant<
    bool,
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetContext_Request>::value &&
    has_bounded_size<nimbro_api_interfaces::srv::CompletionsGetContext_Response>::value
  >
{
};

template<>
struct is_service<nimbro_api_interfaces::srv::CompletionsGetContext>
  : std::true_type
{
};

template<>
struct is_service_request<nimbro_api_interfaces::srv::CompletionsGetContext_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nimbro_api_interfaces::srv::CompletionsGetContext_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__TRAITS_HPP_
