#include <bitset>
#include <iostream>
#include "ChO.h"

void SettingABit::execute()
{
  [[maybe_unused]] constexpr std::uint8_t mask0 { 0b0000'0001 };
  [[maybe_unused]] constexpr std::uint8_t mask1 { 0b0000'0010 };
  [[maybe_unused]] constexpr std::uint8_t mask2 { 0b0000'0100 };
  [[maybe_unused]] constexpr std::uint8_t mask3 { 0b0000'1000 };
  [[maybe_unused]] constexpr std::uint8_t mask4 { 0b0001'0000 };
  [[maybe_unused]] constexpr std::uint8_t mask5 { 0b0010'0000 };
  [[maybe_unused]] constexpr std::uint8_t mask6 { 0b0100'0000 };
  [[maybe_unused]] constexpr std::uint8_t mask7 { 0b1000'0000 };

  std::uint8_t sample { 0b0000'0101 };

  std::cout << "Before setting a bit \n";
  std::cout << (std::bitset<8>) sample << "\n";

  sample |= mask1;

  std::cout << "After setting a bit \n";
  std::cout << (std::bitset<8>) sample << "\n";
}
