#include<iostream>
#include "Ch2.h"

void testFunction() {
  std::cout << "Output from test function" << std::endl;
}

void FunctionDefinition::execute()
{
  testFunction();
  // nextTestFunction(); // won't work
};

void nextTestFunction() {
  std::cout << "Won't work" << std::endl;
}
