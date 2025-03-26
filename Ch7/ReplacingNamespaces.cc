#include <iostream>
#include "Ch7.h"

void ReplacingNamespaces::execute()
{
  {
    using namespace Foo;
    std::cout << "Sum of 5 & 9 is: " << sum(5,9) << "\n";
  }
  {
    using namespace Goo;
    std::cout << "Sum of 5 & 11 is: " << sum(5,11) << "\n";
  }
}
