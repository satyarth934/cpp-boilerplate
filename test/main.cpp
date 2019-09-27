/**
 *  @copyright (c) 2019 Satyarth Praveen, Ishan Patel
 *  @file    main.cpp
 *  @author  Satyarth Praveen, Ishan Patel
 *
 *  @brief Execution of GoogleTests for the project.
 *
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
