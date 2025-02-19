#include <iostream>

class StaticCasting
{

  void printX(char y)
  {
    std::cout << "Value of x is: " << y<< "\n";
  }

  public:

  void execute()
  {
    double x = 65;

    printX(static_cast<int8_t>(x));
  }

};
