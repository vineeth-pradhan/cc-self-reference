#ifndef GLOBAL_CONSTANTS_H
#define GLOBAL_CONSTANTS_H
class GlobalConstants{};

class Chemistry: public GlobalConstants
{
  public: void execute();
};

class Math: public GlobalConstants
{
  public: void execute();
};

class Physics: public GlobalConstants
{
  public: void execute();
};
#endif
