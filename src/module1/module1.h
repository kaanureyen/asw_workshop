typedef struct Module1Inputs {
  int a;
  int b;
} Module1Inputs;

typedef struct Module1Outputs {
  int a;
  int b;
} Module1Outputs;

void InitModule1(Module1Inputs In, Module1Outputs *Out);
void CyclicModule1(Module1Inputs In, Module1Outputs *Out);