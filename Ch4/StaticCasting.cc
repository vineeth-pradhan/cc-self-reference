#include <iostream>
#include "Ch4.h"

void printX(char y)
{
  std::cout << "Value of x is: " << y<< "\n";
}

void StaticCasting::execute()
{
  double x = 65;

  printX(static_cast<int8_t>(x));
};
