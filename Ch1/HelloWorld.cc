#include <iostream>
#include "Ch1.h"

using namespace std;

void HelloWorld::execute()
{
  std::cout << "Hello! May I know your name, please?" << endl;
  std::getline(std::cin, this -> name);
  std::cout << "Hello " << this -> name << " 👋, welcome to the new world of c++ (☞ ͡° ͜ʖ ͡°)☞" << endl;
}
