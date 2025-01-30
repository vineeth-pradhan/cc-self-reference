#include <iostream>
#include <CPPWorkshopConfig.h>

using namespace std;

int main(int argc, char* argv[]) {
  // const double inputValue = std::stod(argv[1]);
  // std::cout << "This is argv[1]" << inputValue << "\n";
  std::cout << argv[0] << " Version " << CPPWorkshop_VERSION_MAJOR
    << "." << CPPWorkshop_VERSION_MINOR << "\n";
  std::cout << "Usage: " << argv[0] << " number" << "\n";
  int a (4);
  // int b = (int) 5.6;  // compiles
  // int b = 5.6;  // compile error
  std::cout << a << endl;// << b << endl;
  return 0;
}
