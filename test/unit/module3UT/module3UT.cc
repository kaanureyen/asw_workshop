#include "gtest/gtest.h"

extern "C" {
#include "module3.h"
}

TEST(module3UT, Passthrough) {
  Module3Inputs In = {};
  Module3Outputs Out = {};
  In.a = 5;
  In.b = 2;
  Out.a = -123;
  Out.b = -45;

  // Step 1: Call init function. Expect Out to be zeroed out.
  InitModule3(In, &Out);
  EXPECT_EQ(0, Out.a);
  EXPECT_EQ(0, Out.b);

  // Step 2: Call cyclic function. Expect the out to have the same values as in.
  CyclicModule3(In, &Out);
  EXPECT_EQ(-2, Out.a);
  EXPECT_EQ(-5, Out.b);
}