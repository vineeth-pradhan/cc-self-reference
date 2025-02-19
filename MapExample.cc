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


void print_map2(std::map<std::string_view, std::string_view> &m)
{
  std::cout << "Alternate way of printing map" << "\n";
  std::cout << "{" << "\n";
  // Use cbegin/cend for readonly. For modify use begin/end
  for(auto it = m.cbegin(); it != m.cend(); it++) {
    std::cout << "  ";
    // If something should be modified, change the cbegin to begin
    // and cend to end above
    //
    // if(it -> first == "name")
    //   it -> second = "Pradhan, Vineeth";

    std::cout << it -> first << ": " << it -> second << "\n";
  }
  std::cout <<"}" << "\n";
}

// g++ -o main -std=c++23 MapExample.cc
// ./main
int main()
{
  std::map<std::string_view, std::string_view> person {{ "name", "Vineeth" }, { "age", "xx" }};
  // std::cout << person["name"] << "\n";
  // std::cout << person["age"] << "\n";
  // std::cout << person["age"].size() << "\n";
  person.insert({"ph", "900xxxxxxx"});
  person.insert({"address", "xxxx, xxxxx block x, xx, BSK x, BLRU - xxx"});
  // std::cout << person["ph"] << "\n";
  print_map(person);
  // Prints out the occurance of name in the map
  std::cout << "Occurance of 'name': "<< person.count("name") << "\n";

  // Prints out the total size of the map
  std::cout << "Total size: " << person.size() << "\n";

  // Prints the total size of that the map can accommodate
  std::cout << "Max size: " << std::scientific << static_cast<double>(person.max_size()) << "\n";

  // Prints the map an alternate way
  print_map2(person);
}
