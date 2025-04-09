class Ch8 {};

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
  private: void greetings(bool);
  public: void execute();
};

class SimpleIf: public Ch8
{
  public: void execute();
};
