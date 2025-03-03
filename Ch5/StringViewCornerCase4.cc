#include <iostream>
#include "Ch5.h"

std::string_view boolString(bool item, std::string &t, std::string &f)
{
  if(item){ return t; }
  else{ return f; }
}

std::string_view boolString2(bool item)
{
  if(item){ return "true"; }
  else{ return "false"; }
}

void StringViewCornerCase4::execute()
{

  std::string t { "true" };
  std::string f { "false" };
  std::cout << "t is " << boolString(true, t, f) << "; and f is " << boolString(false, t, f) << "\n";
  // this is ok
  // std::cout << "t is " << boolString2(true) << "; and f is " << boolString2(false) << "\n";
};
