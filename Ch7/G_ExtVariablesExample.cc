#include "Ch7.h"
#include "G_ExtVariables.h"

void G_ExtVariablesExample::execute()
{
  Chemistry chemistry = Chemistry();
  chemistry.execute();

  Math math = Math();
  math.execute();

  Physics physics = Physics();
  physics.execute();
}
