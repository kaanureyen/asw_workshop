extern double InA;
extern double InB;
extern double OutA;
extern double OutB;

#define RTE_ReadA() ((InA))
#define RTE_ReadB() ((InB))
#define RTE_WriteA(x) ((OutA = (x)))
#define RTE_WriteB(x) ((OutB = (x)))
