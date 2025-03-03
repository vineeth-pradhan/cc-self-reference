#include <iostream>
#include "Ch5.h"

// error: no matching function for call to 'printIt'
// note: candidate function not viable: no known conversion from 'const std::string_view' (aka 'const basic_string_view<char>') to 'std::string' (aka 'basic_string<char>') for 1st argument
// void printIt(std::string s)
// {
//   std::cout << s << "\n";
// }
//

// More efficient in memory handling
void printIt(std::string_view s)
{
  // compile error
  // std::cout << s+"!!" << "\n";

  std::cout << s << "\n";
}

void printAsString(std::string s)
{
  // works
  std::cout << s+"!!" << "\n";
}

void StringViewExample::execute()
{
  using namespace std::string_view_literals;

  constexpr std::string_view str { "Hello Vineeth" };

  printIt(str);

  constexpr std::string s { "Good Morning"sv };

  std::cout << s << "\n";

  // error:
  // printAsString(str);

  // works
  printAsString(static_cast<std::string>( str ));
};
