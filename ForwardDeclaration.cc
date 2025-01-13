#include <iostream>

using namespace std;

int add(int, int);

int main()
{
  cout << "Result of 1+3 is ";
  // Compile error
  cout << add(1,3) << endl;
  return 0;
}

// int add(int x, int y) {
//   return x+y;
// }
