#include <iostream>
#include "HelloWorld.cc"
#include "SizeOfInt.cc"

int main()
{
  std::cout << "Welcome\n";
  HelloWorld hw = HelloWorld();
  hw.execute();
  SizeOfInt si = SizeOfInt();
  si.execute();
  return 0;
}
