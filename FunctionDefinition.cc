#include<iostream>

using namespace std;

void testFunction() {
  cout << "Output from test function" << endl;
}

int main() {
  testFunction();
  // nextTestFunction(); // won't work
  return 0;
}

void nextTestFunction() {
  cout << "Won't work" << endl;
}
