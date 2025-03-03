#include <iostream>
#include "Ch4.h"

// g++ -o main -std=c++23 CharArray.cc
// ./main
void CharArray::execute()
{
  const char all_chars[] = "0123456789abcdefghijklmnopqrstuvwxyz";
  std::cout << "Size of array: " << sizeof(all_chars) - 1 << "\n";
};
