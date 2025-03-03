#include <iostream>
#include <string>
#include "Ch5.h"

void GetlineDemo::execute()
{
  std::string name = "";
  std::cout << "What's your name? \n";
  std::getline(std::cin >> std::ws, name);

  std::cout << "Good morning " << name << std::endl;
};
