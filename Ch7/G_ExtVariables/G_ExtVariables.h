#ifndef G_INT_VARIABLES_H
#define G_INT_VARIABLES_H
class G_ExtVariables{};

class Chemistry: public G_ExtVariables
{
  public: void execute();
};

class Math: public G_ExtVariables
{
  public: void execute();
};

class Physics: public G_ExtVariables
{
  public: void execute();
};
#endif
