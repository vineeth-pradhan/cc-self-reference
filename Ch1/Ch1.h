#ifndef CH1
#define CH1
#include <string>
class Ch1 {};

class DirectInitialization:public Ch1
{
  public: void execute();
};

class HelloWorld:public Ch1
{
  std::string name;
  public: void execute();
};

class ListInitialization:public Ch1
{
  public: void execute();
};

class SizeOfInt:public Ch1
{
  public: void execute();
};
#endif
