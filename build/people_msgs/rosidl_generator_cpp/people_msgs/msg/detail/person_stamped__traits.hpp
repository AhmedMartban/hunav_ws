// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from people_msgs:msg/PersonStamped.idl
// generated code does not contain a copyright notice

#ifndef PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__TRAITS_HPP_
#define PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "people_msgs/msg/detail/person_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'person'
#include "people_msgs/msg/detail/person__traits.hpp"

namespace people_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PersonStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: person
  {
    out << "person: ";
    to_flow_style_yaml(msg.person, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PersonStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: person
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "person:\n";
    to_block_style_yaml(msg.person, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PersonStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace people_msgs

namespace rosidl_generator_traits
{

[[deprecated("use people_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const people_msgs::msg::PersonStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  people_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use people_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const people_msgs::msg::PersonStamped & msg)
{
  return people_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<people_msgs::msg::PersonStamped>()
{
  return "people_msgs::msg::PersonStamped";
}

template<>
inline const char * name<people_msgs::msg::PersonStamped>()
{
  return "people_msgs/msg/PersonStamped";
}

template<>
struct has_fixed_size<people_msgs::msg::PersonStamped>
  : std::integral_constant<bool, has_fixed_size<people_msgs::msg::Person>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<people_msgs::msg::PersonStamped>
  : std::integral_constant<bool, has_bounded_size<people_msgs::msg::Person>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<people_msgs::msg::PersonStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEOPLE_MSGS__MSG__DETAIL__PERSON_STAMPED__TRAITS_HPP_
