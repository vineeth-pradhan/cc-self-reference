#include <iostream>
#include "Ch7.h"

int sum(int x, int y)
{
  return x+y;
}

void NamingCollision::execute()
{
  std::cout << "Calculating sum via Foo::sum for 2 & 3: " << Foo::sum(2,3) << "\n";

  std::cout << "Calculating sum via Goo::sum for 2 & 3: " << Goo::sum(2,3) << "\n";

  std::cout << "Calculating sum via ::sum for 2 & 3: " << ::sum(2,3) << "\n";
}
