double InA = 0.0;
double InB = 0.0;
double OutA = 0.0;
double OutB = 0.0;

double RTE_ReadA(void) { return InA; }

double RTE_ReadB(void) { return InB; }

void RTE_WriteA(double value) { OutA = value; }

void RTE_WriteB(double value) { OutB = value; }
