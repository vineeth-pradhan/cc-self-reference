#include <iostream>

using namespace std;

class HelloWorld
{
  std::string name;

  public:

  void execute()
  {
    std::cout << "Hello! May I know your name, please?" << endl;
    std::getline(std::cin, this -> name);
    std::cout << "Hello " << this -> name << " 👋, welcome to the new world of c++ (☞ ͡° ͜ʖ ͡°)☞" << endl;
  }
};
