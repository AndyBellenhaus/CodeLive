module;

#include <fmt/format.h>

export module utilities;

export int add_number(int first_parameter, int second_parameter)
{
  return first_parameter + second_parameter;
}

export void do_work()
{
  fmt::print("Hello, World!");
  fmt::print("\n");
  int num1{5};
  int num2{10};
  int result = add_number(num1, num2);
  //  int result = num1 + num2;

  fmt::println("Result: {}", result);

  fmt::println("The sky is blue");
  fmt::println("Doing something inside do work");
}
