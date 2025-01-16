#include <iostream>
#include "Vineeth.h"

int main()
{
  // MY_NAME is defined in Vineeth.h header file
  // g++ -o main -I./headers CallingHeader.cc
  std::cout << "Hello " << MY_NAME << std::endl;
}
