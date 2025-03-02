#include <iostream>
#include "Ch2.h"
#define PRINT_VINEETH

void ConditionalCompilation::execute()
{
#ifdef PRINT_VINEETH
  std::cout << "Hello Vineeth :)" << std::endl;
#endif
#ifndef PRINT_PRADHAN
  std::cout << "Pradhan not defined :(" << std::endl;
#endif
#if defined PRINT_VINEETH
  std::cout << "Vineeth, we meet again :o" << std::endl;
#endif
#if !defined PRINT_PRADHAN
  std::cout << "Pradhan still not defined :'(" << std::endl;
#endif
};
