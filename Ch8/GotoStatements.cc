#include <iostream>
#include <string_view>
#include "Ch8.h"

void GotoStatements::greetings(std::string_view skip)
{
  if(skip == "yes")
    goto sayByeBye;

  std::cout << "Welcome to the world" << "\n";
  sayByeBye:
    std::cout << "Adios!" << "\n";
}

void GotoStatements::execute(std::string_view skip)
{
  greetings(skip);
}
