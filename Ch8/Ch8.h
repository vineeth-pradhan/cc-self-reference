#include <string_view>
class Ch8 {};

class AtExitFn: public Ch8
{
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

class RandomNumberGenerator: public Ch8
{
  private: unsigned int get();
  public: void execute();
};

class SeedPRNG: public Ch8
{
  public: void execute();
};

class SimpleIf: public Ch8
{
  public: void execute();
};
