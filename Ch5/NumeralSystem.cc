#include <iostream>
#include <bitset>

class NumeralSystem
{
  public:

    void execute()
    {
      //        (0011'1010) Binary
      //        (0+0+32+16+8+0+2+0=58) Decimal
      //        (00'111'010 = 72) Octal
      int x = 0x3A; // Hexa
                    //
                    //        (00010101) Binary
                    //        ()
      int b = 21;   // 10

      std::cout << x << "\n";
      std::cout << std::hex << x << "\n";
      std::cout << std::oct << x << "\n";
      std::cout << std::bitset<8>(b) << "\n";
    }
};
