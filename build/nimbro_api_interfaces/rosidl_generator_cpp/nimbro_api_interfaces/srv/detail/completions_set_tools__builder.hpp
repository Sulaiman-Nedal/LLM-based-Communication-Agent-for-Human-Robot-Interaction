// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsSetTools.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_set_tools__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsSetTools_Request_tools
{
public:
  explicit Init_CompletionsSetTools_Request_tools(::nimbro_api_interfaces::srv::CompletionsSetTools_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Request tools(::nimbro_api_interfaces::srv::CompletionsSetTools_Request::_tools_type arg)
  {
    msg_.tools = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Request msg_;
};

class Init_CompletionsSetTools_Request_completions_id
{
public:
  Init_CompletionsSetTools_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsSetTools_Request_tools completions_id(::nimbro_api_interfaces::srv::CompletionsSetTools_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return Init_CompletionsSetTools_Request_tools(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsSetTools_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsSetTools_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsSetTools_Response_message
{
public:
  explicit Init_CompletionsSetTools_Response_message(::nimbro_api_interfaces::srv::CompletionsSetTools_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Response message(::nimbro_api_interfaces::srv::CompletionsSetTools_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Response msg_;
};

class Init_CompletionsSetTools_Response_success
{
public:
  Init_CompletionsSetTools_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsSetTools_Response_message success(::nimbro_api_interfaces::srv::CompletionsSetTools_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsSetTools_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsSetTools_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsSetTools_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsSetTools_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_SET_TOOLS__BUILDER_HPP_
