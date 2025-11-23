#include "gtest/gtest.h"

extern "C" {
#include "module1.h"
}

TEST(module1UT, Passthrough) {
  Module1Inputs In = {};
  Module1Outputs Out = {};
  In.a = 5;
  In.b = 2;
  Out.a = 45;
  Out.b = 67;

  // Step 1: Call init function. Expect Out to be zeroed out.
  InitModule1(In, &Out);
  EXPECT_EQ(0, Out.a);
  EXPECT_EQ(0, Out.b);

  // Step 2: Call cyclic function. Expect the out to have the same values as in.
  CyclicModule1(In, &Out);
  EXPECT_EQ(5, Out.a);
  EXPECT_EQ(2, Out.b);
}