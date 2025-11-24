#include "RTEMock.cc"
#include "gtest/gtest.h"

extern "C" {
#include "MyAswProject.h"
}

TEST(swc, Passthrough) {
  InA = 2;
  InB = 3;
  InitRunnable();
  EXPECT_EQ(0, OutA);
  EXPECT_EQ(0, OutB);

  CyclicRunnable();
  EXPECT_EQ(-3, OutA);
  EXPECT_EQ(-2, OutB);
}