#include <iostream>
#include <string>
#include "Ch5.h"

void NamedConstants::execute()
{
  const std::string namedConst = "Hello World";

  // Compile error
  // namedConst = "Good morning";
  //

  // Ways of printing strings
  //
  for(int i = 0; i < namedConst.length(); i++) {
    std::cout << namedConst[i];
    // Cannot modify the internals of a const. Compile err
    // if(i == namedConst.length() - 1) { namedConst[i] = "*"; }
  }
  //
  std::cout << "\n";
  std::cout << namedConst << std::endl;
};
