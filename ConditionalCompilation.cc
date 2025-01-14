#include <iostream>
#define PRINT_VINEETH

int main()
{
#ifdef PRINT_VINEETH
  std::cout << "Hello Vineeth :)" << std::endl;
#endif
#ifndef PRINT_PRADHAN
  std::cout << "No hello for Pradhan :(" << std::endl;
#endif
#if defined PRINT_VINEETH
  std::cout << "Hello Vineeth Again :o" << std::endl;
#endif
#if !defined PRINT_PRADHAN
  std::cout << "Not hello for Pradhan again :'(" << std::endl;
#endif
  return 0;
}
