#include <iostream>
#include "Ch6.h"

void CommaOperator::execute()
{
  int x{2};
  int y{3};

  std::cout << "Adding x, y using increment operator: " << (++x, ++y) << "\n";
};
