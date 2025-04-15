#include <iostream>
#include "ChO.h"
#include "Ch1.h"
#include "Ch2.h"
#include "Ch4.h"
#include "Ch5.h"
#include "Ch6.h"
#include "Ch7.h"
#include "Ch8.h"

int main(int argc, char* argv[])
{
  std::string_view program;

  if(argc > 1)
    program = argv[1];
  else{
    std::cerr << "Too few arguments! Please input a valid program name as an argument to continue\n";
    return 0;
  }

  if(program == "AddingHeaderFiles")
  {
    AddingHeaderFiles ahf = AddingHeaderFiles();
    ahf.execute();
    return 0;
  }
  else if(program == "AnonymousNamespace")
  {
    AnonymousNamespace an = AnonymousNamespace();
    an.execute();
    return 0;
  }
  else if(program == "AutoIncrement")
  {
    AutoIncrement ai = AutoIncrement();
    ai.execute();
    return 0;
  }
  else if(program == "AutoStorageDuration")
  {
    AutoStorageDuration asd = AutoStorageDuration();
    asd.execute();
    return 0;
  }
  else if(program == "AtExitFn")
  {
    AtExitFn aef = AtExitFn();
    aef.execute();
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
  else if(program == "ConstExprIf")
  {
    ConstExprIf cei = ConstExprIf();
    cei.execute();
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
  else if(program == "FallThroughSwitch")
  {
    FallThroughSwitch fts = FallThroughSwitch();
    fts.execute();
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
  else if(program == "GotoStatements")
  {
    std::string_view skip;
    GotoStatements gs = GotoStatements();
    if(argc > 2)
    {
      skip = argv[2];
      gs.execute(skip);
    }
    else
    {
      gs.execute("no");
    }
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
  else if(program == "InlineNamespace")
  {
    InlineNamespace in = InlineNamespace();
    in.execute();
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
  else if(program == "RandomNumberGenerator")
  {
    RandomNumberGenerator rng = RandomNumberGenerator();
    rng.execute();
    return 0;
  }
  else if(program == "ReplacingNamespaces")
  {
    ReplacingNamespaces rn = ReplacingNamespaces();
    rn.execute();
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
  else if(program == "SeedPRNG")
  {
    SeedPRNG sp = SeedPRNG();
    sp.execute();
    return 0;
  }
  else if(program == "SettingABit")
  {
    SettingABit sab = SettingABit();
    sab.execute();
    return 0;
  }
}
