#include <iostream>

class FlipTheBit
{
  public:
    void execute()
    {
      [[maybe_unused]] constexpr std::uint8_t bit0 { 0b0000'0001 };
      [[maybe_unused]] constexpr std::uint8_t bit1 { 0b0000'0010 };
      [[maybe_unused]] constexpr std::uint8_t bit2 { 0b0000'0100 };
      [[maybe_unused]] constexpr std::uint8_t bit3 { 0b0000'1000 };
      [[maybe_unused]] constexpr std::uint8_t bit4 { 0b0001'0000 };
      [[maybe_unused]] constexpr std::uint8_t bit5 { 0b0010'0000 };
      [[maybe_unused]] constexpr std::uint8_t bit6 { 0b0100'0000 };
      [[maybe_unused]] constexpr std::uint8_t bit7 { 0b1000'0000 };

      std::uint8_t sample { 0b1001'0001 };

      std::cout << "Before flipping anything: " << std::bitset<8>(sample) << "\n";
      // flip all
      std::cout << "Flipping all bits: " << std::bitset<8>(~sample) << "\n";
      // flip individual bits
      std::cout << "Before flipping bit0: " << std::bitset<8>(sample) << "\n";
      sample ^= bit0;
      std::cout << "After flipping bit0: " << std::bitset<8>(sample) << "\n";
      sample ^= bit0;
      std::cout << "Flipping bit0 again: " << std::bitset<8>(sample) << "\n";
      sample ^= (bit0 | bit4);
      std::cout << "Flipping bit0 and bit4: " << std::bitset<8>(sample) << "\n";
      sample ^= (bit0 | bit4);
      std::cout << "Flipping bit0 and bit4 again: " << std::bitset<8>(sample) << "\n";
    }
};
