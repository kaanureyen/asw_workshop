#include "OutputWrapper.h"
#include "RTE.h"

void InitOutputWrapper(OutputWrapperInputs In) {
  RTE_WriteA(0.0);
  RTE_WriteB(0.0);
}

void CyclicOutputWrapper(OutputWrapperInputs In) {
  RTE_WriteA(In.a);
  RTE_WriteB(In.b);
}
