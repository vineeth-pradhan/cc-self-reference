#include <iostream>

// g++ -std=c++23 -o main ComparingFloatingPoint.cc
// prints x > y because of rounding errors
int main()
{
  constexpr double x{ 100.00 - 99.99 };
  constexpr double y{ 10.00 - 9.99 };
  std::cout << x << "\n";
  std::cout << y << "\n";

  if(x == y)
  {
    std::cout << "x == y\n";
  }
  else if(x < y)
  {
    std::cout << "x < y\n";
  }
  else if(x > y)
  {
    std::cout << "x > y\n";
  }

  constexpr double a1{0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1};
  std::cout << std::boolalpha;
  // prints false
  std::cout << (a1 == 0.9) << "\n";
}
