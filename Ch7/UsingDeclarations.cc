#include <iostream>
#include "Ch7.h"

std::string cout()
{
  return "Yikes!\n";
}

void UsingDeclarations::execute()
{
  using std::cout;
  // cout();

  cout << "Hello World" << "\n";
}
