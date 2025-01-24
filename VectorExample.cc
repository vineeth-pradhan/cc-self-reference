#include <iostream>
#include <vector>

// g++ -o main -std=c++23 VectorExample.cc
// ./main
int main()
{
  std::vector<int> digits { 1, 6, 0, 7, 1, 9, 8, 7 };
  const int digitsLen = digits.size();
  for(int i = 0; i < digitsLen - 1; i++){
    std::cout << digits[i] << ", ";
  }
  std::cout << digits[digitsLen - 1] << "\n";

  std::vector name { 'V', 'i', 'n', 'e', 'e', 't', 'h' };
  const int nameLen = name.size();
  for(int i = 0; i < nameLen; i++) {
    std::cout << name[i];
  }
  std::cout << "\n";
}
