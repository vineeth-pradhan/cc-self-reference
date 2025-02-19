#include <iostream>
#include <climits>
#include <iomanip>

class SizeOfTypes
{
  public:

    // g++ -o main SizeOfTypes.cc
    // ./main
    void execute()
    {
      std::cout << std::left;

      std::cout << std::setw(32) << "1 byte is " << CHAR_BIT << " bits\n";

      std::cout << std::setw(32) << "bool: " << sizeof(bool) << " byte \n";
      std::cout << std::setw(32) << "char: " << sizeof(char) << " byte \n";
      std::cout << std::setw(32) << "short: " << sizeof(short) << " bytes \n";
      std::cout << std::setw(32) << "int: " << sizeof(int) << " bytes \n";
      std::cout << std::setw(32) << "float: " << sizeof(float) << " bytes \n";
      std::cout << std::setw(32) << "long: " << sizeof(long) << " bytes \n";
      std::cout << std::setw(32) << "long int: " << sizeof(long int) << " bytes \n";
      std::cout << std::setw(32) << "long long: " << sizeof(long long) << " bytes \n";
      // std::cout << std::setw(32) << "long long int: " << sizeof(long long int) << " bytes \n"; // Same as long long -> https://www.learncpp.com/cpp-tutorial/signed-integers/
      std::cout << std::setw(32) << "double: " << sizeof(double) << " bytes \n";
      std::cout << std::setw(32) << "long double: " << sizeof(long double) << " bytes \n";
    }
};
