#include <iostream>
#include <random>
#include "Ch8.h"

void RandomNumberGeneratorWithRandomDevice::execute()
{
  std::mt19937 mt { std::random_device{}() };

  std::uniform_int_distribution die {1,6};

  for(int count {1}; count <= 100; ++count)
  {
    std::cout << die(mt) << "\t";
    if(count % 10 == 0)
      std::cout << "\n";
  }
}
