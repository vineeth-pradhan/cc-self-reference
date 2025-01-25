#include <iostream>
#include <map>

// g++ -o main -std=c++23 MapExample.cc
int main()
{
  std::map<std::string_view, std::string_view> people {{ "name", "Vineeth" }, { "age", "37" }};
  std::cout << people["name"] << "\n";
  std::cout << people["age"] << "\n";
}
