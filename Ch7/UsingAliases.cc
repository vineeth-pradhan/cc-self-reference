#include <iostream>
#include "Ch7.h"

void UsingAliases::execute()
{
  namespace Current = Bar::Kar;

  std::cout << "Calculating sum via Current::sum(Bar:Kar::sum(2,3)) for 2 & 3: " << Current::sum(2,3) << "\n";
}
