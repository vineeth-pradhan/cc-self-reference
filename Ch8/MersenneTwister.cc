#include <iostream>
#include <random>
#include "Ch8.h"

void MersenneTwister::execute()
{
  std::mt19937 mt{};

  for(int count {1}; count <= 100; ++count)
  {
    std::cout << mt() << "\t";
    if(count % 5 == 0)
    {
      std::cout << "\n";
    }
  }
};
