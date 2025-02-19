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
#include "FunctionDefinition.cc"
#include "GetlineDemo.cc"
#include "InfinityDemo.cc"
#include "InputBooleanValues.cc"
#include "ListInitialization.cc"
#include "NamedConstants.cc"
#include "NumeralSystem.cc"
#include "ScopeOfDefines.cc"
#include "SizeOfTypes.cc"
#include "SizeT.cc"
#include "StaticCasting.cc"
#include "StringViewCornerCase.cc"
#include "StringViewCornerCase2.cc"
#include "StringViewCornerCase3.cc"
#include "StringViewCornerCase4.cc"
#include "StringViewExample.cc"
#include "StringViewSubstr.cc"
#include "VariableScope.cc"

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

  FunctionDefinition fd2 = FunctionDefinition();
  fd2.execute();

  GetlineDemo gd = GetlineDemo();
  gd.execute();

  InfinityDemo id = InfinityDemo();
  id.execute();

  InputBooleanValues ibv = InputBooleanValues();
  ibv.execute();

  ListInitialization li = ListInitialization();
  li.execute();

  NamedConstants nc = NamedConstants();
  nc.execute();

  NumeralSystem ns = NumeralSystem();
  ns.execute();

  ScopeOfDefines sod = ScopeOfDefines();
  sod.execute();

  SizeOfTypes sot = SizeOfTypes();
  sot.execute();

  SizeT st = SizeT();
  st.execute();

  StaticCasting sc = StaticCasting();
  sc.execute();

  StringViewCornerCase svcs = StringViewCornerCase();
  svcs.execute();

  StringViewCornerCase2 svcs2 = StringViewCornerCase2();
  svcs2.execute();

  StringViewCornerCase3 svcs3 = StringViewCornerCase3();
  svcs3.execute();

  StringViewCornerCase4 svcs4 = StringViewCornerCase4();
  svcs4.execute();

  StringViewExample sve = StringViewExample();
  sve.execute();

  StringViewSubstr svs = StringViewSubstr();
  svs.execute();

  VariableScope vs = VariableScope();
  vs.execute();

  return 0;
}
