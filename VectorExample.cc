#include <iostream>
#include <vector>

int main()
{
  std::vector<int> digits { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  const int digitsLen = digits.size();
  for(int i = 0; i < digitsLen - 1; i++){
    std::cout << digits[i] << ", ";
  }
  std::cout << digits[digitsLen - 1] << "\n";
}
