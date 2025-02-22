#include <iostream>

class ShortCircuitEvaluation
{

  public:

    void execute()
    {
      int x {0};
      int y {1};

      if(x == 1 && ++y == 2)
      {
        std::cout << "The expression was not short circuited \n";
        std::cout << "So the value of y is: " << y << "\n";
      }
      else
      {
        std::cout << "The expression was not short circuited \n";
        std::cout << "So the value of y is: " << y << "\n";
      }
    }
};
