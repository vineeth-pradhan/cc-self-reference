#include <iostream>
#include "Ch8.h"
  // static unsigned int temp { 0 };
  //
  // temp = 8253729 * temp + 2396403;
  // this -> s_state = temp;

void RandomNumberGenerator::set_s_state()
{
  this -> s_state = 0;
}

void RandomNumberGenerator::set_s_state(unsigned int s_state)
{
  this -> s_state = s_state;
}

unsigned int RandomNumberGenerator::get_s_state()
{
  return this -> s_state;
}

unsigned int RandomNumberGenerator::algorithm()
{
  set_s_state(8253729 * get_s_state() + 2396403);
  return this -> get_s_state() % 32768;
}

void RandomNumberGenerator::execute()
{
  for(int count {1}; count <= 100; ++count)
  {
    std::cout << algorithm() << "\t";
    if(count % 10 == 0)
    {
      std::cout << "\n";
    }
  }
}
