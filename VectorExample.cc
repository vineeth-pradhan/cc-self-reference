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

  std::vector<int> list { 10 };
  std::cout << "The size of the list is " << list.size() << "\n";

  std::vector<int> list2(10);
  std::cout << "This size of the list is " << list2.size() << "\n";

  const int list2Len = list2.size();
  for(int i = 0; i < list2Len - 1; i++) {
    std::cout << list2[i] << ", ";
  }
  std::cout << list2[list2Len - 1] << "\n";
}
