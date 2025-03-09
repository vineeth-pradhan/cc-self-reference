#include <iostream>
#include "Ch7.h"

void UsingNSForConstants::execute()
{
  constexpr float weight { 57.0 };

  std::cout << "Value of gravity: " << constants::gravity << "\n";

  std::cout << "Mass of " << weight << " kg person is: " << getMass(weight) << "\n";
}

float UsingNSForConstants::getMass(float weight)
{
  return weight / constants::gravity;
}
