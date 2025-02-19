#include <iostream>
#include "HelloWorld.cc"
#include "SizeOfInt.cc"
#include "AddingHeaderFiles.cc"
#include "CallingHeader.cc"

int main()
{
  std::cout << "Welcome\n";
  HelloWorld hw = HelloWorld();
  hw.execute();
  SizeOfInt si = SizeOfInt();
  si.execute();
  AddingHeaderFiles ahf = AddingHeaderFiles();
  ahf.execute();
  CallingHeader ch = CallingHeader();
  ch.execute();
  return 0;
}
