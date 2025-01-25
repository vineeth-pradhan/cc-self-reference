#include <iostream>

std::string getName()
{
  std::string s { "Vineeth Pradhan" };
  return s;
}
int main()
{
  std::string_view sView { getName() };

  std::cout << sView << "\n";
}
