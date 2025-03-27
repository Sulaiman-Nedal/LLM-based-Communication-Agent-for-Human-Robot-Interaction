// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:msg/ApiUsage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__BUILDER_HPP_

#include "nimbro_api_interfaces/msg/detail/api_usage__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace msg
{

namespace builder
{

class Init_ApiUsage_output_tokens
{
public:
  explicit Init_ApiUsage_output_tokens(::nimbro_api_interfaces::msg::ApiUsage & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::msg::ApiUsage output_tokens(::nimbro_api_interfaces::msg::ApiUsage::_output_tokens_type arg)
  {
    msg_.output_tokens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

class Init_ApiUsage_input_tokens_cached
{
public:
  explicit Init_ApiUsage_input_tokens_cached(::nimbro_api_interfaces::msg::ApiUsage & msg)
  : msg_(msg)
  {}
  Init_ApiUsage_output_tokens input_tokens_cached(::nimbro_api_interfaces::msg::ApiUsage::_input_tokens_cached_type arg)
  {
    msg_.input_tokens_cached = std::move(arg);
    return Init_ApiUsage_output_tokens(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

class Init_ApiUsage_input_tokens_uncached
{
public:
  explicit Init_ApiUsage_input_tokens_uncached(::nimbro_api_interfaces::msg::ApiUsage & msg)
  : msg_(msg)
  {}
  Init_ApiUsage_input_tokens_cached input_tokens_uncached(::nimbro_api_interfaces::msg::ApiUsage::_input_tokens_uncached_type arg)
  {
    msg_.input_tokens_uncached = std::move(arg);
    return Init_ApiUsage_input_tokens_cached(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

class Init_ApiUsage_model_name
{
public:
  explicit Init_ApiUsage_model_name(::nimbro_api_interfaces::msg::ApiUsage & msg)
  : msg_(msg)
  {}
  Init_ApiUsage_input_tokens_uncached model_name(::nimbro_api_interfaces::msg::ApiUsage::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_ApiUsage_input_tokens_uncached(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

class Init_ApiUsage_api_flavor
{
public:
  explicit Init_ApiUsage_api_flavor(::nimbro_api_interfaces::msg::ApiUsage & msg)
  : msg_(msg)
  {}
  Init_ApiUsage_model_name api_flavor(::nimbro_api_interfaces::msg::ApiUsage::_api_flavor_type arg)
  {
    msg_.api_flavor = std::move(arg);
    return Init_ApiUsage_model_name(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

class Init_ApiUsage_api_type
{
public:
  Init_ApiUsage_api_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiUsage_api_flavor api_type(::nimbro_api_interfaces::msg::ApiUsage::_api_type_type arg)
  {
    msg_.api_type = std::move(arg);
    return Init_ApiUsage_api_flavor(msg_);
  }

private:
  ::nimbro_api_interfaces::msg::ApiUsage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::msg::ApiUsage>()
{
  return nimbro_api_interfaces::msg::builder::Init_ApiUsage_api_type();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__MSG__DETAIL__API_USAGE__BUILDER_HPP_
