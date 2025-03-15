#include <iostream>
#include "internals.h"
#include "G_IntVariables.h"

void IMath::execute()
{
  std::cout << "The value of pi's number is: " << internals::pi << "\n";
};
