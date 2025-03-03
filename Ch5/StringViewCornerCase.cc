#include <iostream>
#include "Ch5.h"

void printString(std::string_view s)
{
  std::cout << s << "\n";
}

void StringViewCornerCase::execute()
{

  std::string str { "Hello Vineeth" };

  std::string_view sView { str };

  str = "";

  // Prints blank which is correct
  printString(str);

  // Prints ello Vineeth ('H' chopped) while str is modified to
  // an empty string!!!
  printString(sView);

  std::string_view sView2 {};

  {
    std::string newString { "Good morning" };
    sView2 = newString;
  }

  std::cout << sView2 << "\n";
};
