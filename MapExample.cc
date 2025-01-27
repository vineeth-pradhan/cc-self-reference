#include <iostream>
#include <map>

void print_map(std::map<std::string_view, std::string_view> &m)
{
  std::cout << "{\n";
  for(const auto& [key, value]: m) {
    // 2 space indent
    std::cout << "  ";
    std::cout << key << ": " << value << "\n";
  }
  std::cout << "}\n";
}

// g++ -o main -std=c++23 MapExample.cc
int main()
{
  using namespace std::string_literals;

  std::map<std::string_view, std::string_view> person {{ "name", "Vineeth" }, { "age", "37" }};
  // std::cout << person["name"] << "\n";
  // std::cout << person["age"] << "\n";
  // std::cout << person["age"].size() << "\n";
  person.insert({"ph"s, "9008909779"});
  // std::cout << person["ph"] << "\n";
  print_map(person);
}
