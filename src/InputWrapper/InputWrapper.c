#include "InputWrapper.h"
#include "RTE.h"

void InitInputWrapper(InputWrapperOutputs *Out) {
  Out->a = 0.0;
  Out->b = 0.0;
}

void CyclicInputWrapper(InputWrapperOutputs *Out) {
  Out->a = RTE_ReadA();
  Out->b = RTE_ReadB();
}
