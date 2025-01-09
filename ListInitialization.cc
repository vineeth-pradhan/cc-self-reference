#include <iostream>
using namespace std;

int main() {
  // int a = (int){ 5.5 }; // compile error
  int a = { 5 };
  std::cout << a << endl;
  return 0;
}
