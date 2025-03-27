// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetSettings.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_SETTINGS__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_SETTINGS__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_settings__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetSettings_Request_completions_id
{
public:
  Init_CompletionsGetSettings_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Request completions_id(::nimbro_api_interfaces::srv::CompletionsGetSettings_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetSettings_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetSettings_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetSettings_Response_parameter_values
{
public:
  explicit Init_CompletionsGetSettings_Response_parameter_values(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response parameter_values(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response::_parameter_values_type arg)
  {
    msg_.parameter_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response msg_;
};

class Init_CompletionsGetSettings_Response_parameter_types
{
public:
  explicit Init_CompletionsGetSettings_Response_parameter_types(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetSettings_Response_parameter_values parameter_types(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response::_parameter_types_type arg)
  {
    msg_.parameter_types = std::move(arg);
    return Init_CompletionsGetSettings_Response_parameter_values(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response msg_;
};

class Init_CompletionsGetSettings_Response_parameter_names
{
public:
  explicit Init_CompletionsGetSettings_Response_parameter_names(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetSettings_Response_parameter_types parameter_names(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response::_parameter_names_type arg)
  {
    msg_.parameter_names = std::move(arg);
    return Init_CompletionsGetSettings_Response_parameter_types(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response msg_;
};

class Init_CompletionsGetSettings_Response_message
{
public:
  explicit Init_CompletionsGetSettings_Response_message(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetSettings_Response_parameter_names message(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsGetSettings_Response_parameter_names(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response msg_;
};

class Init_CompletionsGetSettings_Response_success
{
public:
  Init_CompletionsGetSettings_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsGetSettings_Response_message success(::nimbro_api_interfaces::srv::CompletionsGetSettings_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsGetSettings_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetSettings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetSettings_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetSettings_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_SETTINGS__BUILDER_HPP_
