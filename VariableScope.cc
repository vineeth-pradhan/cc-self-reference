#include <iostream>
using namespace std;

int getNum()
{
  int input;
  cout << "Please enter a number" << endl;
  cin >> input;
  return input;
}

void printNum(int num)
{
  cout << num << endl;
}

int main()
{
  int num = getNum();
  printNum(num);
  return 0;
}
