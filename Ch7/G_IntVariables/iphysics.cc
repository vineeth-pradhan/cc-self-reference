#include <iostream>
#include "internals.h"
#include "G_IntVariables.h"

void IPhysics::execute()
{
  std::cout << "The value of gravity's number is: " << internals::gravity << "\n";
};
