#include <cstdlib>
#include <iostream>
#include "Ch8.h"

static void atexit_handler_1()
{
  std::cout << "Cleanup Bioweapons \n";
}

int AtExit::execute()
{
  const int result = std::atexit(atexit_handler_1);
  if(result)
  {
    std::cerr << "Failed to register callback \n";
    return EXIT_FAILURE;
  }
  std::cout << "Hello World! \n";
  return EXIT_SUCCESS;
}
