#include <iostream>
#include <bitset>

int main()
{
  //        (0011'1010) 2
  //        (0+0+32+16+8+0+2+0=58) 10
  //        (00'111'010 = 72) 8
  int x = 0x3A;

  std::cout << x << "\n";
  std::cout << std::hex << x << "\n";
  std::cout << std::oct << x << "\n";
}
