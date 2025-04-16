#include <iostream>
#include "Ch8.h"

void SeedPRNG::execute()
{
  unsigned int s_state;

  std::cout << "Enter the seed number \n";
  std::cin >> s_state;

  RandomNumberGenerator rng = RandomNumberGenerator();
  rng.set_s_state(s_state);
  rng.execute();
}
