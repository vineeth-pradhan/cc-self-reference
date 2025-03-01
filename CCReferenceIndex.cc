#include "AddingHeaderFiles.cc"
#include "ChO.h"
#include "CallingHeader.cc"
#include "CharacterIntro.cc"
#include "CharArray.cc"
#include "CommaOperator.cc"
#include "ComparingFloatingPoint.cc"
#include "ConditionalCompilation.cc"
#include "DirectInitialization.cc"
#include "Exponentiation.cc"
#include "FixedWidthIntegers.cc"
#include "ForwardDeclaration.cc"
#include "FunctionDefinition.cc"
#include "GetlineDemo.cc"
#include "HelloWorld.cc"
#include "InfinityDemo.cc"
#include "InputBooleanValues.cc"
#include "ListInitialization.cc"
#include "NamedConstants.cc"
#include "NumeralSystem.cc"
#include "ScopeOfDefines.cc"
#include "SizeOfInt.cc"
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
#include "ShortCircuitEvaluation.cc"

int main(int argc, char* argv[])
{
  std::string_view program;

  if(argc > 1)
    program = argv[1];

  if(program == "ComparingFloatingPoint")
  {
    ComparingFloatingPoint cfp = ComparingFloatingPoint();
    cfp.execute();
    return 0;
  }
  else if(program == "ShortCircuitEvaluation")
  {
    ShortCircuitEvaluation sce = ShortCircuitEvaluation();
    sce.execute();
    return 0;
  }
  else if(program == "BitSetIntro")
  {
    BitSetIntro bsi = BitSetIntro();
    bsi.execute();
    return 0;
  }
  else if(program == "BitwiseOperators")
  {
    BitwiseOperators bo = BitwiseOperators();
    bo.execute();
    return 0;
  }
  else if(program == "BitMask")
  {
    BitMask bm = BitMask();
    bm.execute();
    return 0;
  }
  else if(program == "SettingABit")
  {
    SettingABit sab = SettingABit();
    sab.execute();
    return 0;
  }
  else if(program == "ResettingABit")
  {
    ResettingABit rab = ResettingABit();
    rab.execute();
    return 0;
  }
  else if(program == "FlipTheBit")
  {
    FlipTheBit ftb = FlipTheBit();
    ftb.execute();
    return 0;
  }
  else if(program == "ExtractRGBValues")
  {
    ExtractRGBValues eRGBValues = ExtractRGBValues();
    eRGBValues.execute();
    return 0;
  }
  else if(program == "DecimalToBinary")
  {
    DecimalToBinary dtb = DecimalToBinary();
    dtb.execute();
    return 0;
  }

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
