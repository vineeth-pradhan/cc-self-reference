#include <ios>
#include <iostream>
#include "Ch8.h"

bool isVowel(char c)
{
  switch(c)
  {
    [[fallthrough]];
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      return true;
    default:
      return false;
  }
}

void FallThroughSwitch::execute()
{
  std::cout << "The letter e is " << std::boolalpha << isVowel('e') << std::noboolalpha << "\n";
}
