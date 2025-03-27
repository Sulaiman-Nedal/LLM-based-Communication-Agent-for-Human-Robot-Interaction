// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsManage.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_manage__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsManage_Request_parameter_values
{
public:
  explicit Init_CompletionsManage_Request_parameter_values(::nimbro_api_interfaces::srv::CompletionsManage_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsManage_Request parameter_values(::nimbro_api_interfaces::srv::CompletionsManage_Request::_parameter_values_type arg)
  {
    msg_.parameter_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Request msg_;
};

class Init_CompletionsManage_Request_parameter_names
{
public:
  explicit Init_CompletionsManage_Request_parameter_names(::nimbro_api_interfaces::srv::CompletionsManage_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsManage_Request_parameter_values parameter_names(::nimbro_api_interfaces::srv::CompletionsManage_Request::_parameter_names_type arg)
  {
    msg_.parameter_names = std::move(arg);
    return Init_CompletionsManage_Request_parameter_values(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Request msg_;
};

class Init_CompletionsManage_Request_action
{
public:
  explicit Init_CompletionsManage_Request_action(::nimbro_api_interfaces::srv::CompletionsManage_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsManage_Request_parameter_names action(::nimbro_api_interfaces::srv::CompletionsManage_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_CompletionsManage_Request_parameter_names(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Request msg_;
};

class Init_CompletionsManage_Request_completions_id
{
public:
  Init_CompletionsManage_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsManage_Request_action completions_id(::nimbro_api_interfaces::srv::CompletionsManage_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return Init_CompletionsManage_Request_action(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsManage_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsManage_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsManage_Response_completions_id
{
public:
  explicit Init_CompletionsManage_Response_completions_id(::nimbro_api_interfaces::srv::CompletionsManage_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsManage_Response completions_id(::nimbro_api_interfaces::srv::CompletionsManage_Response::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Response msg_;
};

class Init_CompletionsManage_Response_message
{
public:
  explicit Init_CompletionsManage_Response_message(::nimbro_api_interfaces::srv::CompletionsManage_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsManage_Response_completions_id message(::nimbro_api_interfaces::srv::CompletionsManage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsManage_Response_completions_id(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Response msg_;
};

class Init_CompletionsManage_Response_success
{
public:
  Init_CompletionsManage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsManage_Response_message success(::nimbro_api_interfaces::srv::CompletionsManage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsManage_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsManage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsManage_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsManage_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_MANAGE__BUILDER_HPP_
