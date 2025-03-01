#include <iostream>
#include "Ch1.h"

using namespace std;

void DirectInitialization::execute()
{
  // const double inputValue = std::stod(argv[1]);
  // std::cout << "This is argv[1]" << inputValue << "\n";
  int a (4);
  // int b = (int) 5.6;  // compiles
  // int b = 5.6;  // compile error
  std::cout << a << endl;// << b << endl;
}
