#ifndef G_EXT_VARIABLES_H
#define G_EXT_VARIABLES_H
class G_ExtVariables{};

class EChemistry: public G_ExtVariables
{
  public: void execute();
};

class EMath: public G_ExtVariables
{
  public: void execute();
};

class EPhysics: public G_ExtVariables
{
  public: void execute();
};
#endif
