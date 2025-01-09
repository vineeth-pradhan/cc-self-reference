#include <iostream>

using namespace std;

int main() {
  int a (4);
  // int b = (int) 5.6;  // compiles
  // int b = 5.6;  // compile error
  std::cout << a << endl;// << b << endl;
  return 0;
}
