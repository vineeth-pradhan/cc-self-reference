#include <iostream>
#include "Ch7.h"

namespace
{
  void greetings()
  {
    std::cout << "Hello Universe" << "\n";
  }

  void specialGreetings(std::string_view name)
  {
    std::cout << "Hello " << name << "\n";
  }
}

void AnonymousNamespace::execute()
{
  greetings();
  ::specialGreetings("Vineeth");
}
