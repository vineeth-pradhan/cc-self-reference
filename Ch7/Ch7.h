class Ch7{};
namespace Foo
{
  int sum(int, int);
}

namespace Goo
{
  int sum(int, int);
}

namespace Bar
{
  namespace Kar
  {
    int sum(int, int);
  }
}

int sum(int, int);

class NamingCollision:public Ch7
{
  public: void execute();
};

class UsingAliases:public Ch7
{
  public: void execute();
};

class DefiningVariablesWithLinkage: public Ch7
{
  public: void execute();
};

class ExternalLinkage: public Ch7
{
  public: void execute();
};

class InlineFunction: public Ch7
{
  public: void execute();
};

class UsingNSForConstants: public Ch7
{
  private: float getMass(float);
  public: void execute();
};
