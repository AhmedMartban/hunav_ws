// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from people_msgs:msg/People.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "people_msgs/msg/detail/people__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace people_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void People_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) people_msgs::msg::People(_init);
}

void People_fini_function(void * message_memory)
{
  auto typed_message = static_cast<people_msgs::msg::People *>(message_memory);
  typed_message->~People();
}

size_t size_function__People__people(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<people_msgs::msg::Person> *>(untyped_member);
  return member->size();
}

const void * get_const_function__People__people(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<people_msgs::msg::Person> *>(untyped_member);
  return &member[index];
}

void * get_function__People__people(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<people_msgs::msg::Person> *>(untyped_member);
  return &member[index];
}

void fetch_function__People__people(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const people_msgs::msg::Person *>(
    get_const_function__People__people(untyped_member, index));
  auto & value = *reinterpret_cast<people_msgs::msg::Person *>(untyped_value);
  value = item;
}

void assign_function__People__people(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<people_msgs::msg::Person *>(
    get_function__People__people(untyped_member, index));
  const auto & value = *reinterpret_cast<const people_msgs::msg::Person *>(untyped_value);
  item = value;
}

void resize_function__People__people(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<people_msgs::msg::Person> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember People_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs::msg::People, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "people",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<people_msgs::msg::Person>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(people_msgs::msg::People, people),  // bytes offset in struct
    nullptr,  // default value
    size_function__People__people,  // size() function pointer
    get_const_function__People__people,  // get_const(index) function pointer
    get_function__People__people,  // get(index) function pointer
    fetch_function__People__people,  // fetch(index, &value) function pointer
    assign_function__People__people,  // assign(index, value) function pointer
    resize_function__People__people  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers People_message_members = {
  "people_msgs::msg",  // message namespace
  "People",  // message name
  2,  // number of fields
  sizeof(people_msgs::msg::People),
  People_message_member_array,  // message members
  People_init_function,  // function to initialize message memory (memory has to be allocated)
  People_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t People_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &People_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace people_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<people_msgs::msg::People>()
{
  return &::people_msgs::msg::rosidl_typesupport_introspection_cpp::People_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, people_msgs, msg, People)() {
  return &::people_msgs::msg::rosidl_typesupport_introspection_cpp::People_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
