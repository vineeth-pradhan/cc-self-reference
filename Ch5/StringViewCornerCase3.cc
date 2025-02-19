#include <iostream>

class StringViewCornerCase3
{
  public:

  // g++ -o main -std=c++11 StringViewCornerCase3.cc
  // ./main
  void execute()
  {
    std::string s { "Hello World" };
    std::string_view sView { s };

    s = "Hello Universe";

    // Prints Hello Unive. Omits out 'rse'
    std::cout << sView << "\n";

    sView = s;

    // ok
    std::cout << sView << "\n";
  }
};
