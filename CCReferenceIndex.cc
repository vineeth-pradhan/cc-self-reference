#include "HelloWorld.cc"
#include "SizeOfInt.cc"
#include "AddingHeaderFiles.cc"
#include "CallingHeader.cc"
#include "CharacterIntro.cc"
#include "CharArray.cc"
#include "CommaOperator.cc"
#include "ConditionalCompilation.cc"
#include "DirectInitialization.cc"
#include "Exponentiation.cc"
#include "FixedWidthIntegers.cc"
#include "ForwardDeclaration.cc"

int main()
{
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

  CharArray ca = CharArray();
  ca.execute();

  CommaOperator co = CommaOperator();
  co.execute();

  ConditionalCompilation cc = ConditionalCompilation();
  cc.execute();

  DirectInitialization di = DirectInitialization();
  di.execute();

  Exponentiation e = Exponentiation();
  e.execute();

  FixedWidthIntegers fwi = FixedWidthIntegers();
  fwi.execute();

  ForwardDeclaration fd = ForwardDeclaration();
  fd.execute();

  return 0;
}
