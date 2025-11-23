typedef struct Module2Inputs {
  int a;
  int b;
} Module2Inputs;

typedef struct Module2Outputs {
  int a;
  int b;
} Module2Outputs;

void InitModule2(Module2Inputs In, Module2Outputs *Out);
void CyclicModule2(Module2Inputs In, Module2Outputs *Out);