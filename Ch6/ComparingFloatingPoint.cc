#include <iostream>
#include <iomanip>

class ComparingFloatingPoint
{
  public:

  // g++ -std=c++23 -o main ComparingFloatingPoint.cc
  // prints x > y because of rounding errors
  void execute()
  {
    constexpr float a1 { 0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f };
    constexpr float expectedA1 = 0.9f;
    // debug
    std::cout << "Expected value of a1: "<< expectedA1 << "\n";
    std::cout << "Actual value of a1: "<< std::fixed << std::setprecision(8) << a1 << "\n";

    std::cout << std::boolalpha;
    std::cout << "Are they equal?: " << (a1 == expectedA1) << "\n";
  }
};
