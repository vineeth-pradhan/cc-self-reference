#include <iostream>
#include "Ch5.h"

void StringViewSubStr::execute()
{
  std::string_view original_string { "Hello World" };
  std::string_view my_hello { std::string_view(original_string).substr(0,5) };
  std::cout << my_hello << "\n";
};
