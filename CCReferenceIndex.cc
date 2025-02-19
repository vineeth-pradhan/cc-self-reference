#include <iostream>
#include "HelloWorld.cc"
#include "SizeOfInt.cc"
#include "AddingHeaderFiles.cc"

int main()
{
  std::cout << "Welcome\n";
  HelloWorld hw = HelloWorld();
  hw.execute();
  SizeOfInt si = SizeOfInt();
  si.execute();
  AddingHeaderFiles ahf = AddingHeaderFiles();
  ahf.execute();
  return 0;
}
