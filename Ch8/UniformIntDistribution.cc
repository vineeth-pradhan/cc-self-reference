#include <iostream>
#include <random>
#include "Ch8.h"

void UniformIntDistribution::execute()
{
  std::mt19937 mt{};
  std::uniform_int_distribution die6{1,6};

  for(int count{1}; count <= 100; ++count)
  {
    std::cout << die6(mt) << "\t";
    if(count % 10 == 0)
    {
      std::cout << "\n";
    }
  }
}
