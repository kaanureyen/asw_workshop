#include "InputWrapper.h"
#include "OutputWrapper.h"
#include "module1.h"
#include "module2.h"
#include "module3.h"

// input output structures for modules
InputWrapperOutputs Out_InputWrapper = {};
OutputWrapperInputs In_OutputWrapper = {};
Module1Inputs In_Module1 = {};
Module1Outputs Out_Module1 = {};
Module2Inputs In_Module2 = {};
Module2Outputs Out_Module2 = {};
Module3Inputs In_Module3 = {};
Module3Outputs Out_Module3 = {};


// module call functions to get the respective inputs and call with correct
// arguments
void CallInputWrapper(void) { CyclicInputWrapper(&Out_InputWrapper); }

void CallModule1(void) {
  In_Module1.a = Out_InputWrapper.a;
  In_Module1.b = Out_InputWrapper.b;
  CyclicModule1(In_Module1, &Out_Module1);
}

void CallModule2(void) {
  In_Module2.a = Out_Module1.a;
  In_Module2.b = Out_Module1.b;
  CyclicModule2(In_Module2, &Out_Module2);
}

void CallModule3(void) {
  In_Module3.a = Out_Module2.a;
  In_Module3.b = Out_Module2.b;
  CyclicModule3(In_Module3, &Out_Module3);
}

void CallOutputWrapper(void) {
  In_OutputWrapper.a = Out_Module3.a;
  In_OutputWrapper.b = Out_Module3.b;
  CyclicOutputWrapper(In_OutputWrapper);
}

// call init functions of each one. since this should be independent from inptu
// data, calling with empty inputs
void InitRunnable(void) {
  InitInputWrapper(&Out_InputWrapper);
  InitModule1((Module1Inputs){}, &Out_Module1);
  InitModule2((Module2Inputs){}, &Out_Module2);
  InitModule3((Module3Inputs){}, &Out_Module3);
  InitOutputWrapper((OutputWrapperInputs){});
}

// call cyclic functions of each module.
void CyclicRunnable(void) {
  CallInputWrapper();
  CallModule1();
  CallModule2();
  CallModule3();
  CallOutputWrapper();
}