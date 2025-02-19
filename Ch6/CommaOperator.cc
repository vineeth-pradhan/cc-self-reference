#include <iostream>

class CommaOperator
{
  public:

  void execute()
  {
    int x{2};
    int y{3};

    std::cout << "Adding x, y using increment operator: " << (++x, ++y) << "\n";
  }
};
