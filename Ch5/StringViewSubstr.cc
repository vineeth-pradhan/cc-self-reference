#include <iostream>

class StringViewSubstr
{
  public:
    // g++ -o main -std=c++23 StringViewSubstr.cc
    // ./main
    void execute()
    {
      std::string_view original_string { "Hello World" };
      std::string_view my_hello { std::string_view(original_string).substr(0,5) };
      std::cout << my_hello << "\n";
    }
};
