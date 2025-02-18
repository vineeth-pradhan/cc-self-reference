#include <iostream>
#include "HelloWorld.cc"

int main()
{
  std::cout << "Welcome\n";
  HelloWorld hw = HelloWorld();
  hw.sayHello();
  return 0;
}
