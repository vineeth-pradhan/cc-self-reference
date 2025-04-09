#include <iostream>
#include "Ch8.h"

void GotoStatements::greetings(bool skip)
{
  if(skip)
    goto sayByeBye;

  std::cout << "Welcome to the world" << "\n";
  sayByeBye:
    std::cout << "Adios!" << "\n";
}

void GotoStatements::execute()
{
  greetings(true);
}
