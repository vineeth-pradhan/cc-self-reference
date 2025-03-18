#include <iostream>
#include "Ch7.h"

void AutoIncrement::increment()
{
  static int s_counter { 0 };
  s_counter += 1;
  std::cout << "Counter now " << s_counter << "\n";
}

// Prints:
// Counter now 2
// Counter now 3
// Counter now 4
void AutoIncrement::execute()
{
  this->increment();
  this->increment();
  this->increment();
}
