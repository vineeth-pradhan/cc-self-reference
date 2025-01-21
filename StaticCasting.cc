#include <iostream>

void printX(char y)
{
  std::cout << "Value of x is: " << y<< "\n";
}

int main()
{
  double x = 65;

  printX(static_cast<int8_t>(x));
}
