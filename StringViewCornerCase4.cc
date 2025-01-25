#include <iostream>

std::string_view boolString(bool item)
{
  std::string t { "true" };
  std::string f { "false" };

  if(item){ return t; }
  else{ return f; }
}

std::string_view boolString2(bool item)
{
  if(item){ return "true"; }
  else{ return "false"; }
}

// g++ -o main -std=c++23 StringViewCornerCase4.cc
// ./main
//
// returns t is true; and f is PVW� 
int main()
{
  std::cout << "t is " << boolString(true) << "; and f is " << boolString(false) << "\n";
  // this is ok
  // std::cout << "t is " << boolString2(true) << "; and f is " << boolString2(false) << "\n";
  return 0;
}
