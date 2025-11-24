#include "module3.h"

void InitModule3(Module3Inputs In, Module3Outputs *Out) {
  Out->a = 0.0;
  Out->b = 0.0;
}

void CyclicModule3(Module3Inputs In, Module3Outputs *Out) {
  Out->a = -In.b;
  Out->b = -In.a;
}
