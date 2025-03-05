#include <iostream>
#include "Ch7.h"

void DefiningVariablesWithLinkage::execute()
{
  int x {7};
  {
    int x {0};
    std::cout << "Value of x inside the block is: " << x << "\n";
  }
    std::cout << "Value of x outside the inner-block is: " << x << "\n";
}
