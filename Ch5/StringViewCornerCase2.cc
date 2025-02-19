#include <iostream>

class StringViewCornerCase2
{
  std::string getName()
  {
    std::string s { "Vineeth Pradhan" };
    return s;
  }

  public:

  void execute()
  {
    std::string_view sView { getName() };

    std::cout << sView << "\n";
  }
};
