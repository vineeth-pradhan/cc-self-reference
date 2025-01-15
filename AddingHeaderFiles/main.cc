#include "add.h"
#include <iostream>

// g++ -o main -I./AddingHeaderFiles AddingHeaderFiles/main.cc AddingHeaderFiles/add.cc
// ./main
int main()
{
  std::cout << "The sum of 3 and 4 is " << sum(3, 4) << std::endl;
  return 0;
}
