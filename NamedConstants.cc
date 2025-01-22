#include <iostream>
#include <string>

int main()
{
  const std::string namedConst = "Hello World";

  // Compile error
  // namedConst = "Good morning";
  //

  // Ways of printing strings
  //
  for(int i = 0; i < namedConst.length(); i++) {
    std::cout << namedConst[i];
  }
  //
  std::cout << "\n";
  std::cout << namedConst << std::endl;
}
