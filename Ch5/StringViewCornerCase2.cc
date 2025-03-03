#include <iostream>
#include "Ch5.h"

std::string getName()
{
  std::string s { "Vineeth Pradhan" };
  return s;
}

void StringViewCornerCase2::execute()
{

  std::string_view sView { getName() };

  std::cout << sView << "\n";
};
