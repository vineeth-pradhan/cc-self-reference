#include <iostream>

// g++ -o main -std=c++23 StringViewSubstr.cc
// ./main
int main()
{
  std::string_view original_string { "Hello World" };
  std::string_view my_hello { std::string_view(original_string).substr(0,5) };
  std::cout << my_hello << "\n";
  return 0;
}
