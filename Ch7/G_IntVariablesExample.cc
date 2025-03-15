#include "Ch7.h"
#include "G_IntVariables.h"

void G_IntVariablesExample::execute()
{
  IChemistry chemistry = IChemistry();
  chemistry.execute();

  IMath math = IMath();
  math.execute();

  IPhysics physics = IPhysics();
  physics.execute();
}
