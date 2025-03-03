#ifndef CH6
#define CH6
#include <cstdint>

class Ch6 {};

class CommaOperator:public Ch6
{
  public: void execute();
};

class ComparingFloatingPoint:public Ch6
{
  private:
    bool absApproximation(float, float, float);
    bool relApproximation(float, float, float);
  public: void execute();
};

class Exponentiation:public Ch6
{
  private: constexpr std::int64_t exponent_safe(std::int64_t base, int exp);
  public: void execute();
};

class ShortCircuitEvaluation:public Ch6
{
  public: void execute();
};

#endif
