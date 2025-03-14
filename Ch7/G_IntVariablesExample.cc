#include "Ch7.h"
#include "G_IntVariables.h"

void G_IntVariablesExample::execute()
{
  Chemistry chemistry = Chemistry();
  chemistry.execute();

  Math math = Math();
  math.execute();

  Physics physics = Physics();
  physics.execute();
}
