#include "InputWrapper.h"
#include "OutputWrapper.h"
#include "module1.h"
#include "module2.h"

// input output structures for modules
extern InputWrapperOutputs Out_InputWrapper;
extern OutputWrapperInputs In_OutputWrapper;
extern Module1Inputs In_Module1;
extern Module1Outputs Out_Module1;
extern Module2Inputs In_Module2;
extern Module2Outputs Out_Module2;

// module call functions to get the respective inputs and call with correct
// arguments
void CallInputWrapper(void);

void CallModule1(void);

void CallModule2(void);

void CallOutputWrapper(void);

// call init functions of each one. since this should be independent from inptu
// data, calling with empty inputs
void InitRunnable(void);

// call cyclic functions of each module.
void CyclicRunnable(void);