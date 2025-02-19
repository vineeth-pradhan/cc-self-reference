#include <iostream>
int add(int, int);

class ForwardDeclaration
{
  public:

  void execute()
  {
    std::cout << "Result of 1+3 is ";
    // Compile error
    std::cout << add(1,3) << std::endl;
  }

  int add(int x, int y) {
    return x+y;
  }
};
