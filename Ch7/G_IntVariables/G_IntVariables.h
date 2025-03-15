#ifndef G_INT_VARIABLES_H
#define G_INT_VARIABLES_H
class G_IntVariables{};

class IChemistry: public G_IntVariables
{
  public: void execute();
};

class IMath: public G_IntVariables
{
  public: void execute();
};

class IPhysics: public G_IntVariables
{
  public: void execute();
};
#endif
