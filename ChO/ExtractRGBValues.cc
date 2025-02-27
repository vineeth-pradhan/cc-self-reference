#include <cstdint>
#include <iostream>

class ExtractRGBValues
{
  public:
    void execute()
    {
      constexpr std::uint32_t redBits { 0xFF000000 };
      constexpr std::uint32_t greenBits { 0x00FF0000 };
      constexpr std::uint32_t blueBits { 0x0000FF00 };
      constexpr std::uint32_t alphaBits { 0x000000FF };

      std::cout << "Enter a 32-bit RGB value: ";
      std::uint32_t pixel {};
      std::cin >> std::hex >> pixel;

      const std::uint8_t red { static_cast<uint8_t>((pixel & redBits) >> 24) };
      const std::uint8_t green { static_cast<uint8_t>((pixel & greenBits) >> 16) };
      const std::uint8_t blue { static_cast<uint8_t>((pixel & blueBits) >> 8) };
      const std::uint8_t alpha { static_cast<uint8_t>(pixel & alphaBits) };

      // std::cout << "(pixel & redBits) without right shifting: ------------------- \n";
      // std::cout << "Red: " << std::bitset<8>(static_cast<int>(static_cast<uint8_t>(pixel & redBits))) << "\n";
      // std::cout << "Green: " << static_cast<uint8_t>(pixel & greenBits) << "\n";
      // std::cout << "Blue: " << static_cast<uint8_t>(pixel & blueBits) << "\n";
      // std::cout << "Alpha: " << static_cast<uint8_t>(pixel & alphaBits) << "\n";
      // std::cout << "------------------------------------------------------------- \n";

      std::cout << "Your color contains:\n";
      std::cout << std::hex; // print the following values in hex

      // reminder: std::uint8_t will likely print as a char
      // we static_cast to int to ensure it prints as an integer
      std::cout << static_cast<int>(red) << " red\n";
      std::cout << static_cast<int>(green) << " green\n";
      std::cout << static_cast<int>(blue) << " blue\n";
      std::cout << static_cast<int>(alpha) << " alpha\n";
    }
};
