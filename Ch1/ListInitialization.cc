#include <iostream>
#include "Ch1.h"

void ListInitialization::execute()
{
  // int a = (int){ 5.5 }; // compile error
  int a = { 5 };
  std::cout << a << std::endl;
};
