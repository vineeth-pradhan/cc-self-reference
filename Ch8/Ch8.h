#include <string_view>
class Ch8 {};

class AtExit: public Ch8
{
  private: void atexit_handler_1();
  private: void atexit_handler_2();

  public: int execute();
};

class ConstExprIf: public Ch8
{
  public: void execute();
};

class FallThroughSwitch: public Ch8
{
  public: void execute();
};

class GotoStatements: public Ch8
{
  private: void greetings(std::string_view);
  public: void execute(std::string_view);
};

class SimpleIf: public Ch8
{
  public: void execute();
};
