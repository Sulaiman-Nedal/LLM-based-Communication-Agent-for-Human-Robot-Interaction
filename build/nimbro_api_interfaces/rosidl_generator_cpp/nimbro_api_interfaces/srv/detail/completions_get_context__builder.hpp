// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsGetContext.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_get_context__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetContext_Request_completions_id
{
public:
  Init_CompletionsGetContext_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Request completions_id(::nimbro_api_interfaces::srv::CompletionsGetContext_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetContext_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetContext_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsGetContext_Response_messages
{
public:
  explicit Init_CompletionsGetContext_Response_messages(::nimbro_api_interfaces::srv::CompletionsGetContext_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Response messages(::nimbro_api_interfaces::srv::CompletionsGetContext_Response::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Response msg_;
};

class Init_CompletionsGetContext_Response_context
{
public:
  explicit Init_CompletionsGetContext_Response_context(::nimbro_api_interfaces::srv::CompletionsGetContext_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetContext_Response_messages context(::nimbro_api_interfaces::srv::CompletionsGetContext_Response::_context_type arg)
  {
    msg_.context = std::move(arg);
    return Init_CompletionsGetContext_Response_messages(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Response msg_;
};

class Init_CompletionsGetContext_Response_message
{
public:
  explicit Init_CompletionsGetContext_Response_message(::nimbro_api_interfaces::srv::CompletionsGetContext_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsGetContext_Response_context message(::nimbro_api_interfaces::srv::CompletionsGetContext_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsGetContext_Response_context(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Response msg_;
};

class Init_CompletionsGetContext_Response_success
{
public:
  Init_CompletionsGetContext_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsGetContext_Response_message success(::nimbro_api_interfaces::srv::CompletionsGetContext_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsGetContext_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsGetContext_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsGetContext_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsGetContext_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_GET_CONTEXT__BUILDER_HPP_
