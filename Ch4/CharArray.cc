#include <iostream>

// g++ -o main -std=c++23 CharArray.cc
// ./main
class CharArray
{
  public:

  void execute()
  {
    const char all_chars[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    std::cout << "Size of array: " << sizeof(all_chars) - 1 << "\n";
  }
};
