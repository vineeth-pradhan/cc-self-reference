#include <iostream>

class CharacterIntro
{
  public:

    void execute()
    {
      char c;
      std::cout << "Please enter a character \n";
      std::cin >> c;
      std::cout << "You entered: " << c << "\n";
      std::cout << "Please enter the next character \n";
      std::cin >> c;
      std::cout << "You entered: " << c << "\n";
    }
};
