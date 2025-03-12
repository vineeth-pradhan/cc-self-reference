#include "Ch7.h"
#include "GlobalConstants.h"

void GlobalConstantsExample::execute()
{
  Chemistry chemistry = Chemistry();
  chemistry.execute();

  Math math = Math();
  math.execute();

  Physics physics = Physics();
  physics.execute();
}
