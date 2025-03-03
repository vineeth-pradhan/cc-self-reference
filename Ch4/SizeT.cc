#include <iostream>
#include <cstdint>
#include "Ch4.h"

void SizeT::execute()
{
  std::size_t a = sizeof(int);
  std::cout << "Size of int is " << a << "\n";
};

