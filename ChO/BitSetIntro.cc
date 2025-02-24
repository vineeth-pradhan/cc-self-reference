#include <iostream>

class BitSetIntro
{
  public:

  void execute()
  {
    std::bitset<8> boolFlags {0b0000'0010};
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.set(0) ------------------------------------" << "\n";
    boolFlags.set(0);
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.set(4) ------------------------------------" << "\n";
    boolFlags.set(4);
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.set(7) ------------------------------------" << "\n";
    boolFlags.set(7);
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.flip(7) ------------------------------------" << "\n";
    boolFlags.flip(7);
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.flip(7) again ------------------------------------" << "\n";
    boolFlags.flip(7);
    std::cout << boolFlags << "\n";

    std::cout << "boolFlags.reset(7) ------------------------------------" << "\n";
    boolFlags.reset(7);
    std::cout << boolFlags << "\n";
  }
};
