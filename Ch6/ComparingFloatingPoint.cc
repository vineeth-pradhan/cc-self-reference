#include <algorithm>
#include <iostream>
#include <iomanip>

class ComparingFloatingPoint
{
  bool absApproximation(float a, float b, float absEpsilon)
  {
    return std::abs(a-b) <= absEpsilon;
  }

  // irb> (90000.89843750 - 90000.90625000).abs <= ([90000.89843750, 90000.90625000].max * 0.00001)
  bool relApproximation(float a, float b, float relEpsilon)
  {
    // If close to 0, return true. Otherwise use relative weightage
    if(absApproximation(a, b, relEpsilon))
      return true;

    return std::abs(a-b) <= (std::max(std::abs(a),std::abs(b)) * relEpsilon);
  }

  public:

  // g++ -std=c++23 -o main ComparingFloatingPoint.cc
  // prints x > y because of rounding errors
  void execute()
  {
    constexpr float a1 { 0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f+0.1f };
    constexpr float expectedA1 = 0.9f;
    // debug
    std::cout << "0.1\n";
    std::cout << "Expected value of a1: "<< expectedA1 << "\n";
    std::cout << "Actual value of a1: "<< std::fixed << std::setprecision(8) << a1 << "\n";
    std::cout << std::boolalpha;
    std::cout << "Straight forward method: Are they equal? " << (a1 == expectedA1) << "\n";
    std::cout << "Absolute approximation: Are they equal? " << absApproximation(a1, expectedA1, 0.00001f) << "\n";
    std::cout << "absolute approximation ----------------------------------------------------\n";
    std::cout << "approximation factor: 0.00001f\n";
    std::cout << "10000.1\n";

    constexpr float veryBigA1 = { 10000.1f + 10000.1f + 10000.1f + 10000.1f + 10000.1f + 10000.1f + 10000.1f + 10000.1f + 10000.1f };
    constexpr float expectedVeryBigA1 = 90000.9f;
    // debug
    std::cout << "Expected value of veryBigA1: "<< expectedVeryBigA1 << "\n";
    std::cout << "Actual value of veryBigA1: "<< std::fixed << std::setprecision(8) << veryBigA1 << "\n";
    std::cout << "Straight forward method: Are they equal? " << (veryBigA1 == expectedVeryBigA1) << "\n";
    std::cout << "Absolute approximation: Are they equal? " << absApproximation(veryBigA1, expectedVeryBigA1, 0.00001f) << "\n";

    std::cout << "relative approximation ----------------------------------------------------\n";
    std::cout << "approximation factor: 0.00001f\n";
    std::cout << "10000.1\n";
    std::cout << "Expected value of veryBigA1: "<< expectedVeryBigA1 << "\n";
    std::cout << "Actual value of veryBigA1: "<< std::fixed << std::setprecision(8) << veryBigA1 << "\n";
    std::cout << "Straight forward method: Are they equal? " << (veryBigA1 == expectedVeryBigA1) << "\n";
    std::cout << "Relative approximation: Are they equal? " << relApproximation(veryBigA1, expectedVeryBigA1, 0.00001f) << "\n";

    std::cout << "relative approximation ----------------------------------------------------\n";
    std::cout << "approximation factor: 0.00001f\n";
    std::cout << "0.0\n";
    std::cout << "Expected value: "<< 0.0 << "\n";
    std::cout << "Actual value: "<< std::fixed << std::setprecision(8) << (a1-0.9f) << "\n";
    std::cout << "Straight forward method: Are they equal? " << (a1 == 0.9f) << "\n";
    std::cout << "Relative approximation: Are they equal? " << relApproximation((a1-0.9f), 0.0f, 0.00001f) << "\n";
  }
};
