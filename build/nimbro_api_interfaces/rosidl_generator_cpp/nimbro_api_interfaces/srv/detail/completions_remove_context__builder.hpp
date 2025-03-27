// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nimbro_api_interfaces:srv/CompletionsRemoveContext.idl
// generated code does not contain a copyright notice

#ifndef NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__BUILDER_HPP_
#define NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__BUILDER_HPP_

#include "nimbro_api_interfaces/srv/detail/completions_remove_context__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsRemoveContext_Request_index
{
public:
  explicit Init_CompletionsRemoveContext_Request_index(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request index(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request msg_;
};

class Init_CompletionsRemoveContext_Request_indexing_last_to_first
{
public:
  explicit Init_CompletionsRemoveContext_Request_indexing_last_to_first(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsRemoveContext_Request_index indexing_last_to_first(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request::_indexing_last_to_first_type arg)
  {
    msg_.indexing_last_to_first = std::move(arg);
    return Init_CompletionsRemoveContext_Request_index(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request msg_;
};

class Init_CompletionsRemoveContext_Request_remove_all
{
public:
  explicit Init_CompletionsRemoveContext_Request_remove_all(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request & msg)
  : msg_(msg)
  {}
  Init_CompletionsRemoveContext_Request_indexing_last_to_first remove_all(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request::_remove_all_type arg)
  {
    msg_.remove_all = std::move(arg);
    return Init_CompletionsRemoveContext_Request_indexing_last_to_first(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request msg_;
};

class Init_CompletionsRemoveContext_Request_completions_id
{
public:
  Init_CompletionsRemoveContext_Request_completions_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsRemoveContext_Request_remove_all completions_id(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request::_completions_id_type arg)
  {
    msg_.completions_id = std::move(arg);
    return Init_CompletionsRemoveContext_Request_remove_all(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsRemoveContext_Request>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsRemoveContext_Request_completions_id();
}

}  // namespace nimbro_api_interfaces


namespace nimbro_api_interfaces
{

namespace srv
{

namespace builder
{

class Init_CompletionsRemoveContext_Response_message
{
public:
  explicit Init_CompletionsRemoveContext_Response_message(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response & msg)
  : msg_(msg)
  {}
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response message(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response msg_;
};

class Init_CompletionsRemoveContext_Response_success
{
public:
  Init_CompletionsRemoveContext_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompletionsRemoveContext_Response_message success(::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CompletionsRemoveContext_Response_message(msg_);
  }

private:
  ::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nimbro_api_interfaces::srv::CompletionsRemoveContext_Response>()
{
  return nimbro_api_interfaces::srv::builder::Init_CompletionsRemoveContext_Response_success();
}

}  // namespace nimbro_api_interfaces

#endif  // NIMBRO_API_INTERFACES__SRV__DETAIL__COMPLETIONS_REMOVE_CONTEXT__BUILDER_HPP_
