#include <iostream>
#include "add.h"
#include "Ch2.h"

// g++ -std=c++23 -o main AddingHeaderFiles.cc AddingHeaderFiles_add.cc -Iheaders
// ./main
void AddingHeaderFiles::execute()
{
  std::cout << "The sum of 3 and 4 is " << sum(3, 4) << std::endl;
}
