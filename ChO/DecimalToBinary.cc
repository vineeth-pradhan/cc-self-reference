#include <cstdint>
#include <iostream>
#include "ChO.h"

void DecimalToBinary::execute()
{
  constexpr uint8_t pos_d{ 76 };
  constexpr int neg_d { -76 };
  std::cout << static_cast<int>(pos_d) << " in binary: " << std::bitset<8>(pos_d) << "\n";
  std::cout << neg_d << " in binary: " << std::bitset<8>(neg_d) << "\n";
}
