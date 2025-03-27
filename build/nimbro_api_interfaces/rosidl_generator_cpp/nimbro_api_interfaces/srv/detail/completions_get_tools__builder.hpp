// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetTools.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_TOOLS__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_TOOLS__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_tools__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetTools_Request_completions_id
{
public:
  Init_CompletionsGetTools_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Request completions_id(::nimbro_api_interfaces::srv::CompletionsGetTools_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetTools_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetTools_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetTools_Response_tools
{
public:
  explicit Init_CompletionsGetTools_Response_tools(::nimbro_api_interfaces::srv::CompletionsGetTools_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Response tools(::nimbro_api_interfaces::srv::CompletionsGetTools_Response::_tools_type arg)
  {
    msg_.tools = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Response msg_;
};

class Init_CompletionsGetTools_Response_message
{
public:
  explicit Init_CompletionsGetTools_Response_message(::nimbro_api_interfaces::srv::CompletionsGetTools_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetTools_Response_tools message(::nimbro_api_interfaces::srv::CompletionsGetTools_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsGetTools_Response_tools(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Response msg_;
};

class Init_CompletionsGetTools_Response_success
{
public:
  Init_CompletionsGetTools_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsGetTools_Response_message success(::nimbro_api_interfaces::srv::CompletionsGetTools_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsGetTools_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetTools_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetTools_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetTools_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_TOOLS__BUILDER_HPP_
