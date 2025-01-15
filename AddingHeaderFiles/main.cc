#include "add.h"
#include <iostream>

// g++ -o AddingHeaderFiles/main -I./AddingHeaderFiles AddingHeaderFiles/main.cc AddingHeaderFiles/add.cc
// ./AddingHeaderFiles/main
int main()
{
  std::cout << "The sum of 3 and 4 is " << sum(3, 4) << std::endl;
  return 0;
}
