#include<iostream>

void testFunction() {
  std::cout << "Output from test function" << std::endl;
}

class FunctionDefinition
{
  public:

  void execute() {
    testFunction();
    // nextTestFunction(); // won't work
  }
};

void nextTestFunction() {
  std::cout << "Won't work" << std::endl;
}
