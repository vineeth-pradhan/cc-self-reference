#include <iostream>
#include <cstdint>

class SizeT
{
  public:

    void execute()
    {
      std::size_t a = sizeof(int);
      std::cout << "Size of int is " << a << "\n";
    }
};

