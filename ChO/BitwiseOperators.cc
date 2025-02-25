#include <iostream>

class BitwiseOperators
{
  public:
    // x = 2 => "0000'0010" => "0000'0100"
    void execute()
    {
      int x {2};
      std::cout << "Bitwise shift operators ...........................................\n";
      std::cout << "Current value of x: " << x << "\n";
      std::cout << "x is initially set to: " << static_cast<std::bitset<8>>(x) << "\n";
      std::cout << "...................................................................\n";

      std::cout << "Current value of x: " << x << "\n";
      std::cout << "Left shifting by 1 place...." << "\n";
      std::cout << "X after left shifting: \n" << (x << 1) << "\n";
      std::cout << "X after left shifting(bin): \n" << static_cast<std::bitset<8>>(x << 1) << "\n";
      std::cout << "...................................................................\n";

      std::cout << "Left shifting by 2 places...." << "\n";
      std::cout << "X after left shifting: \n" << (x << 2) << "\n";
      std::cout << "X after left shifting(bin): \n" << static_cast<std::bitset<8>>(x << 2) << "\n";
      std::cout << "...................................................................\n";

      std::cout << "Right shifting by 1 place...." << "\n";
      std::cout << "X after right shifting: \n" << (x >> 1) << "\n";
      std::cout << "X after left shifting(bin): \n" << static_cast<std::bitset<8>>(x >> 1) << "\n";
      std::cout << "...................................................................\n";

      std::cout << "Right shifting by 2 places...." << "\n";
      std::cout << "X after right shifting: \n" << (x >> 2) << "\n";
      std::cout << "X after left shifting(bin): \n" << static_cast<std::bitset<8>>(x >> 2) << "\n";
      std::cout << "...................................................................\n";
    }
};
