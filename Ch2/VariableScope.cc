#include <iostream>
#include "Ch2.h"

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

void VariableScope::execute()
{
  int num = getNum();
  printNum(num);
};
