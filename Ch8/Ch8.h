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

class MersenneTwister: public Ch8
{
  public: void execute();
};

class RandomNumberGenerator: public Ch8
{
  private:
    unsigned int s_state;
  public:
    unsigned int get_s_state();
    unsigned int algorithm();
    void set_s_state(unsigned int);
    void set_s_state();
    void execute();
};

class SeedPRNG: public Ch8
{
  public: void execute();
};

class SimpleIf: public Ch8
{
  public: void execute();
};
