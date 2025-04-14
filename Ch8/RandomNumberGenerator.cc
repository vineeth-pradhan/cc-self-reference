#include <iostream>
#include "Ch8.h"

unsigned int RandomNumberGenerator::get()
{
  static unsigned int s_state { 0 };

  s_state = 8253729 * s_state + 2396403;
  return s_state % 32768;
}

void RandomNumberGenerator::execute()
{
  for(int count {1}; count <= 100; ++count)
  {
    std::cout << get() << "\t";
    if(count % 10 == 0)
      std::cout << "\n";
  }
}
