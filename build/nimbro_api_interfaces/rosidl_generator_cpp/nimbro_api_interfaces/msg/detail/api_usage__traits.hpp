// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__TRAITS_HPP_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__TRAITS_HPP_

#include "nimbro_api_interfaces/msg/detail/api_usage__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nimbro_api_interfaces::msg::ApiUsage>()
{
  return "nimbro_api_interfaces::msg::ApiUsage";
}

template<>
inline const char * name<nimbro_api_interfaces::msg::ApiUsage>()
{
  return "nimbro_api_interfaces/msg/ApiUsage";
}

template<>
struct has_fixed_size<nimbro_api_interfaces::msg::ApiUsage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nimbro_api_interfaces::msg::ApiUsage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nimbro_api_interfaces::msg::ApiUsage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__TRAITS_HPP_
