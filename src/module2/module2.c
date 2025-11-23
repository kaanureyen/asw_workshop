#include "module2.h"

void InitModule2(Module2Inputs In, Module2Outputs *Out) {
  Out->a = 0.0;
  Out->b = 0.0;
}

void CyclicModule2(Module2Inputs In, Module2Outputs *Out) {
  Out->a = In.a;
  Out->b = In.b;
}
