#include <iostream>
#include "Ch7.h"

void UsingStaticLocalVariables::keepIncrementing()
{
  static int counter {1};
  counter += 1;
  std::cout << "Counter now " << counter << "\n";
}

// Prints:
// Counter now 2
// Counter now 3
// Counter now 4
void UsingStaticLocalVariables::execute()
{
  this->keepIncrementing();
  this->keepIncrementing();
  this->keepIncrementing();
}
