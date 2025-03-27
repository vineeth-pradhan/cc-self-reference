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

// int sum(int, int);

class AnonymousNamespace: public Ch7
{
  public: void execute();
};

class AutoIncrement: public Ch7
{
  public:
    void execute();
    void increment();
};

class AutoStorageDuration: public Ch7
{
  public:
    void execute();
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

class G_IntVariablesExample: public Ch7
{
  public: void execute();
};

class G_InlVariablesExample: public Ch7
{
  public: void execute();
};

class G_ExtVariablesExample: public Ch7
{
  public: void execute();
};

class NamingCollision:public Ch7
{
  public: void execute();
};

class ReplacingNamespaces: public Ch7
{
  public: void execute();
};

class UsingAliases:public Ch7
{
  public: void execute();
};

class UsingDeclarations: public Ch7
{
  public: void execute();
};

class UsingNSForConstants: public Ch7
{
  private: float getMass(float);
  public: void execute();
};
