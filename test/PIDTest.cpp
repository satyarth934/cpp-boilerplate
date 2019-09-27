/**
 *  @copyright (c) 2019 Satyarth Praveen, Ishan Patel
 *  @file    PIDTest.cpp
 *  @author  Satyarth Praveen, Ishan Patel
 *
 *  @brief GoogleTests for the project.
 *
 */

#include <gtest/gtest.h>
#include <PID.hpp>

/**
 * @brief Runs and tests the compute() function for certain inputs
 *
 */
TEST(PIDTest, computeOutputValueCheck) {
  PID pidObj1(5, 3, 3);
  EXPECT_EQ(pidObj1.compute(10.0, 1.0), 99);
  EXPECT_EQ(pidObj1.compute(10.0, 2.0), 88);
  EXPECT_EQ(pidObj1.compute(20.0, 5.0), 165);

  PID pidObj2(1, 2, 3);
  EXPECT_EQ(pidObj2.compute(10.0, 1.0), 54);
  EXPECT_EQ(pidObj2.compute(10.0, 2.0), 48);
  EXPECT_EQ(pidObj2.compute(20.0, 5.0), 90);
}

/**
 * @brief Comparison test to check improvement in error
 *
 */
TEST(PIDTest, computeOutputErrorComparison) {
  PID pidObj(5, 3, 3);

  double targetSetpoint = 100;
  double actualVelocity = 20;

  double computeOutput = pidObj.compute(targetSetpoint, actualVelocity);
  double newError = targetSetpoint - computeOutput;
  double oldError = targetSetpoint - actualVelocity;
  EXPECT_LT(newError, oldError);
}
