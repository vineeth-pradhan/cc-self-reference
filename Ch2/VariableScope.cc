#include <iostream>

class VariableScope
{
  int getNum()
  {
    int input;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> input;
    return input;
  }

  void printNum(int num)
  {
    std::cout << num << std::endl;
  }

  public:

  void execute()
  {
    int num = getNum();
    printNum(num);
  }
};
