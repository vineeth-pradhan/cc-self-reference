#include <iostream>
#include "Ch2.h"
int add(int, int);

void ForwardDeclaration::execute()
{
  std::cout << "Result of 1+3 is ";
  // Compile error
  std::cout << add(1,3) << std::endl;
};

int add(int x, int y) {
  return x+y;
}
