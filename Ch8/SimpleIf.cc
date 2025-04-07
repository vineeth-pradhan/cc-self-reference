#include <iostream>
#include "Ch8.h"

void SimpleIf::execute()
{
  constexpr double gravity{ 9.8 };

  if (gravity == 9.8)
    std::cout << "Gravity is normal.\n";
  else
    std::cout << "We are not on Earth.\n";
}
