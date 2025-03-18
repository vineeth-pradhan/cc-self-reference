#include <iostream>
#include "Ch7.h"

void UsingStaticLocalVariables::keepIncrementing()
{
  static int counter {1};
  counter += 1;
  std::cout << "Counter now " << counter << "\n";
}

void UsingStaticLocalVariables::execute()
{
  this->keepIncrementing();
  this->keepIncrementing();
  this->keepIncrementing();
}
