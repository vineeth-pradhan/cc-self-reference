#include <iostream>

// Pass by reference
// The message passed is changed to 'Good evening'
// The changed message is printed in printName
// & the message also gets changed here onwards
// since the argument was passed by reference
void out_printName(std::string &out_greeting)
{
  std::cout << "------------Example for pass by reference------------ \n";
  out_greeting = "Good evening";
  std::cout << out_greeting << "\n";
}

// Pass by value
// The message passed to this is changed to 'Good evening'
// The changed message is printed in printName
// BUT the original message value is not changed here onwards
// because the argument passed was by value and therefore
// the original message value is retained
void printName(std::string greeting)
{
  std::cout << "------------Example for pass by value------------ \n";
  greeting = "Good evening";
  std::cout << greeting << "\n";
}

// g++ -o main -std=c++23 PassByReference.cc
// ./main
int main()
{
  std::string greeting {"Good Morning"};
  printName(greeting);
  std::cout << "Greeting message after calling print: " << greeting << "\n";
}
