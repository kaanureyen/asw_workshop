#include "module1.h"

void InitModule1(Module1Inputs In, Module1Outputs *Out) {
  Out->a = 0.0;
  Out->b = 0.0;
}

void CyclicModule1(Module1Inputs In, Module1Outputs *Out) {
  Out->a = In.a;
  Out->b = In.b;
}
