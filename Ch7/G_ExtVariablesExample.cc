#include "Ch7.h"
#include "G_ExtVariables.h"

void G_ExtVariablesExample::execute()
{
  EChemistry chemistry = EChemistry();
  chemistry.execute();

  EMath math = EMath();
  math.execute();

  EPhysics physics = EPhysics();
  physics.execute();
}
