#include "Ch7.h"
#include "G_InlVariables.h"

void G_InlVariablesExample::execute()
{
  LChemistry chemistry = LChemistry();
  chemistry.execute();

  LMath math = LMath();
  math.execute();

  LPhysics physics = LPhysics();
  physics.execute();
}
