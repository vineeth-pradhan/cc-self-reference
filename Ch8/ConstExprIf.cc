#include <iostream>
#include "Ch8.h"

void ConstExprIf::execute()
{
  constexpr double gravity { 9.8 };

  if constexpr(gravity == 9.8)
  {
    std::cout << "Welcome to earth" << "\n";
  }
  else
  {
    std::cout << "Welcome to hell" << "\n";
  }
}
