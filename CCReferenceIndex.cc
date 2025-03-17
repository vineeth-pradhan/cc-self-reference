#include <iostream>
#include "ChO.h"
#include "Ch1.h"
#include "Ch2.h"
#include "Ch4.h"
#include "Ch5.h"
#include "Ch6.h"
#include "Ch7.h"

int main(int argc, char* argv[])
{
  std::string_view program;

  if(argc > 1)
    program = argv[1];
  else{
    std::cerr << "Too fee arguments! Please input a valid program name as an argument to continue\n";
    return 0;
  }

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
  else if(program == "CharArray")
  {
    CharArray ca = CharArray();
    ca.execute();
    return 0;
  }
  else if(program == "CharacterIntro")
  {
    CharacterIntro ci = CharacterIntro();
    ci.execute();
    return 0;
  }
  else if(program == "CommaOperator")
  {
    CommaOperator co = CommaOperator();
    co.execute();
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
  else if(program == "DefiningVariablesWithLinkage")
  {
    DefiningVariablesWithLinkage dvwl = DefiningVariablesWithLinkage();
    dvwl.execute();
  }
  else if(program == "DirectInitialization")
  {
    DirectInitialization di = DirectInitialization();
    di.execute();
    return 0;
  }
  else if(program == "Exponentiation")
  {
    Exponentiation e = Exponentiation();
    e.execute();
    return 0;
  }
  else if(program == "ExternalLinkage")
  {
    ExternalLinkage el = ExternalLinkage();
    el.execute();
    return 0;
  }
  else if(program == "ExtractRGBValues")
  {
    ExtractRGBValues eRGBValues = ExtractRGBValues();
    eRGBValues.execute();
    return 0;
  }
  else if(program == "FixedWidthIntegers")
  {
    FixedWidthIntegers fwi = FixedWidthIntegers();
    fwi.execute();
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
  else if(program == "GetlineDemo")
  {
    GetlineDemo gd = GetlineDemo();
    gd.execute();
    return 0;
  }
  else if(program == "G_ExtVariablesExample")
  {
    G_ExtVariablesExample gExtVar = G_ExtVariablesExample();
    gExtVar.execute();
    return 0;
  }
  else if(program == "G_InlVariablesExample")
  {
    G_InlVariablesExample gInlVar = G_InlVariablesExample();
    gInlVar.execute();
    return 0;
  }
  else if(program == "G_IntVariablesExample")
  {
    G_IntVariablesExample gIntVar = G_IntVariablesExample();
    gIntVar.execute();
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
  else if(program == "InlineFunction")
  {
    InlineFunction ifn = InlineFunction();
    ifn.execute();
    return 0;
  }
  else if(program == "InputBooleanValues")
  {
    InputBooleanValues ibv = InputBooleanValues();
    ibv.execute();
    return 0;
  }
  else if(program == "ListInitialization")
  {
    ListInitialization li = ListInitialization();
    li.execute();
    return 0;
  }
  else if(program == "NamedConstants")
  {
    NamedConstants nc = NamedConstants();
    nc.execute();
    return 0;
  }
  else if(program == "NamingCollision")
  {
    NamingCollision nc = NamingCollision();
    nc.execute();
    return 0;
  }
  else if(program == "NumeralSystem")
  {
    NumeralSystem ns = NumeralSystem();
    ns.execute();
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
  else if(program == "SizeOfTypes")
  {
    SizeOfTypes sot = SizeOfTypes();
    sot.execute();
    return 0;
  }
  else if(program == "SizeT")
  {
    SizeT st = SizeT();
    st.execute();
    return 0;
  }
  else if(program == "StaticCasting")
  {
    StaticCasting sc = StaticCasting();
    sc.execute();
    return 0;
  }
  else if(program == "StringViewCornerCase")
  {
    StringViewCornerCase svcs = StringViewCornerCase();
    svcs.execute();
    return 0;
  }
  else if(program == "StringViewCornerCase2")
  {
    StringViewCornerCase2 svcs2 = StringViewCornerCase2();
    svcs2.execute();
    return 0;
  }
  else if(program == "StringViewCornerCase3")
  {
    StringViewCornerCase3 svcs3 = StringViewCornerCase3();
    svcs3.execute();
    return 0;
  }
  else if(program == "StringViewCornerCase4")
  {
    StringViewCornerCase4 svcs4 = StringViewCornerCase4();
    svcs4.execute();
    return 0;
  }
  else if(program == "StringViewExample")
  {
    StringViewExample sve = StringViewExample();
    sve.execute();
    return 0;
  }
  else if(program == "StringViewSubStr")
  {
    StringViewSubStr svs = StringViewSubStr();
    svs.execute();
    return 0;
  }
  else if(program == "UsingAliases")
  {
    UsingAliases ua = UsingAliases();
    ua.execute();
    return 0;
  }
  else if(program == "UsingNSForConstants")
  {
    UsingNSForConstants unsfc = UsingNSForConstants();
    unsfc.execute();
    return 0;
  }
  else if(program == "VariableScope")
  {
    VariableScope vs = VariableScope();
    vs.execute();
    return 0;
  }
  else
  {
    std::cerr << "Invalid input argument, please input a valid program name as an input argument to run this program\n";
  }
}
