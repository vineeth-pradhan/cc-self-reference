#include <iostream>
#include "Ch7.h"

inline double pi()
{
  return 3.14159;
}

inline double circumference(int radius)
{
  return 2 * pi() * radius;
}

void InlineFunction::execute()
{
  std::cout << "Circumference of a circle with radius 2cm: " << circumference(2) << "\n";
}
