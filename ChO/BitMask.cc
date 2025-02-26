#include <cstdint>
#include <iostream>

class BitMask
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

      constexpr std::uint8_t sample { 0b0110'0101 };
      std::cout << "Sample: " << (std::bitset<8>)sample << "\n";
      std::cout << "--------------------------------------------\n";

      std::cout << "Bit 0 is: " << ((sample & mask0) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 1 is: " << ((sample & mask1) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 2 is: " << ((sample & mask2) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 3 is: " << ((sample & mask3) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 4 is: " << ((sample & mask4) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 5 is: " << ((sample & mask5) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 6 is: " << ((sample & mask6) ? "ON" : "OFF") << "\n";
      std::cout << "Bit 7 is: " << ((sample & mask7) ? "ON" : "OFF") << "\n";
    }
};
