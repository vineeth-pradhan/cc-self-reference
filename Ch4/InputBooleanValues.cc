#include <iostream>
#include "Ch4.h"

void InputBooleanValues::execute()
{
  std::cout << "Please enter a boolean value\n";
  bool a;
  std::cin >> std::boolalpha;
  std::cin >> a;
  std::cout << std::boolalpha;
  std::cout << "You entered " << a << "\n";
};
