// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsPrompt.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_prompt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsPrompt_Request_response_type
{
public:
  explicit Init_CompletionsPrompt_Request_response_type(::nimbro_api_interfaces::srv::CompletionsPrompt_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request response_type(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_response_type_type arg)
  {
    msg_.response_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

class Init_CompletionsPrompt_Request_tool_response_id
{
public:
  explicit Init_CompletionsPrompt_Request_tool_response_id(::nimbro_api_interfaces::srv::CompletionsPrompt_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Request_response_type tool_response_id(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_tool_response_id_type arg)
  {
    msg_.tool_response_id = std::move(arg);
    return Init_CompletionsPrompt_Request_response_type(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

class Init_CompletionsPrompt_Request_reset_context
{
public:
  explicit Init_CompletionsPrompt_Request_reset_context(::nimbro_api_interfaces::srv::CompletionsPrompt_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Request_tool_response_id reset_context(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_reset_context_type arg)
  {
    msg_.reset_context = std::move(arg);
    return Init_CompletionsPrompt_Request_tool_response_id(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

class Init_CompletionsPrompt_Request_text
{
public:
  explicit Init_CompletionsPrompt_Request_text(::nimbro_api_interfaces::srv::CompletionsPrompt_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Request_reset_context text(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_CompletionsPrompt_Request_reset_context(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

class Init_CompletionsPrompt_Request_role
{
public:
  explicit Init_CompletionsPrompt_Request_role(::nimbro_api_interfaces::srv::CompletionsPrompt_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Request_text role(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_CompletionsPrompt_Request_text(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

class Init_CompletionsPrompt_Request_completions_id
{
public:
  Init_CompletionsPrompt_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsPrompt_Request_role completions_id(::nimbro_api_interfaces::srv::CompletionsPrompt_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return Init_CompletionsPrompt_Request_role(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsPrompt_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsPrompt_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsPrompt_Response_tool_calls
{
public:
  explicit Init_CompletionsPrompt_Response_tool_calls(::nimbro_api_interfaces::srv::CompletionsPrompt_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Response tool_calls(::nimbro_api_interfaces::srv::CompletionsPrompt_Response::_tool_calls_type arg)
  {
    msg_.tool_calls = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Response msg_;
};

class Init_CompletionsPrompt_Response_text
{
public:
  explicit Init_CompletionsPrompt_Response_text(::nimbro_api_interfaces::srv::CompletionsPrompt_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Response_tool_calls text(::nimbro_api_interfaces::srv::CompletionsPrompt_Response::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_CompletionsPrompt_Response_tool_calls(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Response msg_;
};

class Init_CompletionsPrompt_Response_message
{
public:
  explicit Init_CompletionsPrompt_Response_message(::nimbro_api_interfaces::srv::CompletionsPrompt_Response & msg)
  : msg_(msg)
  {}
  Init_CompletionsPrompt_Response_text message(::nimbro_api_interfaces::srv::CompletionsPrompt_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CompletionsPrompt_Response_text(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Response msg_;
};

class Init_CompletionsPrompt_Response_success
{
public:
  Init_CompletionsPrompt_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsPrompt_Response_message success(::nimbro_api_interfaces::srv::CompletionsPrompt_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsPrompt_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsPrompt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsPrompt_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsPrompt_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_PROMPT__BUILDER_HPP_
