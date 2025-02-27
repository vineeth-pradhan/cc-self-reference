#include <iostream>

class ResettingABit
{
  public:
    void execute()
    {
      [[maybe_unused]] constexpr std::uint8_t mask0 { 0b0000'0001 };
      [[maybe_unused]] constexpr std::uint8_t mask1 { 0b0000'0010 };
      [[maybe_unused]] constexpr std::uint8_t mask2 { 0b0000'0100 };
      [[maybe_unused]] constexpr std::uint8_t mask3 { 0b0000'1000 };
      [[maybe_unused]] constexpr std::uint8_t mask4 { 0b0001'0000 };
      [[maybe_unused]] constexpr std::uint8_t mask5 { 0b0010'0000 };
      [[maybe_unused]] constexpr std::uint8_t mask6 { 0b0100'0000 };
      [[maybe_unused]] constexpr std::uint8_t mask7 { 0b1000'0000 };

      std::uint8_t sample { 0b0000'1111 };

      std::cout << "Before unsetting the binary value\n";
      std::cout << (std::bitset<8>)sample << "\n";

      sample &= ~mask2;

      std::cout << "After unsetting the binary 2 \n";
      std::cout << (std::bitset<8>) sample << "\n";
    }
};
