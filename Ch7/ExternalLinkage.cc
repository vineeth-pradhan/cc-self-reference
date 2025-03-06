#include <iostream>
#include "Ch7.h"

// Without forward declaration and despite the add.cc included in the library in Ch7/CMakeLists.txt file, the linker will fail
int add(int, int);

// Without the add.cc added to the library in Ch7/CMakeLists.cc, the linker will fail
void ExternalLinkage::execute()
{
  std::cout << add(3,4) << "\n";
}
