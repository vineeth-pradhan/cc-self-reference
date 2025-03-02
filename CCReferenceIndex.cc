#include "ChO.h"
#include "Ch1.h"
#include "Ch2.h"
#include "CharacterIntro.cc"
#include "CharArray.cc"
#include "CommaOperator.cc"
#include "ComparingFloatingPoint.cc"
#include "Exponentiation.cc"
#include "FixedWidthIntegers.cc"
#include "GetlineDemo.cc"
#include "InputBooleanValues.cc"
#include "NamedConstants.cc"
#include "NumeralSystem.cc"
#include "SizeOfTypes.cc"
#include "SizeT.cc"
#include "StaticCasting.cc"
#include "StringViewCornerCase.cc"
#include "StringViewCornerCase2.cc"
#include "StringViewCornerCase3.cc"
#include "StringViewCornerCase4.cc"
#include "StringViewExample.cc"
#include "StringViewSubstr.cc"
#include "ShortCircuitEvaluation.cc"

int main(int argc, char* argv[])
{
  std::string_view program;

  if(argc > 1)
    program = argv[1];

  if(program == "AddingHeaderFiles")
  {
    AddingHeaderFiles ahf = AddingHeaderFiles();
    ahf.execute();
    return 0;
  }
  else if(program == "BitMask")
  {
    BitMask bm = BitMask();
    bm.execute();
    return 0;
  }
  else if(program == "BitwiseOperators")
  {
    BitwiseOperators bo = BitwiseOperators();
    bo.execute();
    return 0;
  }
  else if(program == "BitSetIntro")
  {
    BitSetIntro bsi = BitSetIntro();
    bsi.execute();
    return 0;
  }
  else if(program == "CallingHeader")
  {
    CallingHeader ch = CallingHeader();
    ch.execute();
    return 0;
  }
  else if(program == "ComparingFloatingPoint")
  {
    ComparingFloatingPoint cfp = ComparingFloatingPoint();
    cfp.execute();
    return 0;
  }
  else if(program == "ConditionalCompilation")
  {
    ConditionalCompilation cc = ConditionalCompilation();
    cc.execute();
    return 0;
  }
  else if(program == "DecimalToBinary")
  {
    DecimalToBinary dtb = DecimalToBinary();
    dtb.execute();
    return 0;
  }
  else if(program == "DirectInitialization")
  {
    DirectInitialization di = DirectInitialization();
    di.execute();
    return 0;
  }
  else if(program == "ExtractRGBValues")
  {
    ExtractRGBValues eRGBValues = ExtractRGBValues();
    eRGBValues.execute();
    return 0;
  }
  else if(program == "FlipTheBit")
  {
    FlipTheBit ftb = FlipTheBit();
    ftb.execute();
    return 0;
  }
  else if(program == "ForwardDeclaration")
  {
    ForwardDeclaration fd = ForwardDeclaration();
    fd.execute();
    return 0;
  }
  else if(program == "FunctionDefinition")
  {
    FunctionDefinition fd2 = FunctionDefinition();
    fd2.execute();
    return 0;
  }
  else if(program == "HelloWorld")
  {
    HelloWorld hw = HelloWorld();
    hw.execute();
    return 0;
  }
  else if(program == "InfinityDemo")
  {
    InfinityDemo id = InfinityDemo();
    id.execute();
    return 0;
  }
  else if(program == "ListInitialization")
  {
    ListInitialization li = ListInitialization();
    li.execute();
    return 0;
  }
  else if(program == "ResettingABit")
  {
    ResettingABit rab = ResettingABit();
    rab.execute();
    return 0;
  }
  else if(program == "ScopeOfDefines")
  {
    ScopeOfDefines sod = ScopeOfDefines();
    sod.execute();
    return 0;
  }
  else if(program == "SettingABit")
  {
    SettingABit sab = SettingABit();
    sab.execute();
    return 0;
  }
  else if(program == "ShortCircuitEvaluation")
  {
    ShortCircuitEvaluation sce = ShortCircuitEvaluation();
    sce.execute();
    return 0;
  }
  else if(program == "SizeOfInt")
  {
    SizeOfInt si = SizeOfInt();
    si.execute();
    return 0;
  }
  else if(program == "VariableScope")
  {
    VariableScope vs = VariableScope();
    vs.execute();
    return 0;
  }

  CharacterIntro ci = CharacterIntro();
  ci.execute();

  CharArray ca = CharArray();
  ca.execute();

  CommaOperator co = CommaOperator();
  co.execute();

  Exponentiation e = Exponentiation();
  e.execute();

  FixedWidthIntegers fwi = FixedWidthIntegers();
  fwi.execute();

  GetlineDemo gd = GetlineDemo();
  gd.execute();

  InputBooleanValues ibv = InputBooleanValues();
  ibv.execute();

  NamedConstants nc = NamedConstants();
  nc.execute();

  NumeralSystem ns = NumeralSystem();
  ns.execute();

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

  return 0;
}
