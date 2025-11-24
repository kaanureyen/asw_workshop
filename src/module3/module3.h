typedef struct Module3Inputs {
  int a;
  int b;
} Module3Inputs;

typedef struct Module3Outputs {
  int a;
  int b;
} Module3Outputs;

void InitModule3(Module3Inputs In, Module3Outputs *Out);
void CyclicModule3(Module3Inputs In, Module3Outputs *Out);