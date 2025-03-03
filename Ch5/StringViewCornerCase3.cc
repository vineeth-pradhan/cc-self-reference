#include <iostream>
#include "Ch5.h"

void StringViewCornerCase3::execute()
{
  std::string s { "Hello World" };
  std::string_view sView { s };

  s = "Hello Universe";

  // Prints Hello Unive. Omits out 'rse'
  std::cout << sView << "\n";

  sView = s;

  // ok
  std::cout << sView << "\n";
};
