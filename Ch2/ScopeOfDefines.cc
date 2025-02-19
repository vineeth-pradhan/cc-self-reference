#include <iostream>

void foo()
{
#define MY_NAME "Vineeth"
}

class ScopeOfDefines
{
  public:
    void execute()
    {
      // This prints My name is Vineeth even though foo()
      // is never called!
      // That's because preprocessor directives are
      // pre-processed before compiling and while
      // compiling the pre-processor passes through foo()
      // and reads the deinition of MY_NAME, therefore in
      // knows even though that function is never called
      std::cout << "My name is " << MY_NAME << std::endl;
    }

};
