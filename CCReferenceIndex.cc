#include <iostream>
#include "HelloWorld.cc"
#include "SizeOfInt.cc"
#include "AddingHeaderFiles.cc"
#include "CallingHeader.cc"
#include "CharacterIntro.cc"

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
  CharacterIntro ci = CharacterIntro();
  ci.execute();
  return 0;
}
