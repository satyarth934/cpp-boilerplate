/**
 *  @copyright (c) 2019 Satyarth Praveen, Ishan Patel
 *  @file    main.cpp
 *  @author  Satyarth Praveen, Ishan Patel
 *
 *  @brief Declaration of the PID class and class members to compute
 *  the output given the target setpoint and actual velocity.
 */

#pragma once

#include<iostream>

/**
 * @brief The class PID has private members Kp, Ki, Kd, and a public member
 * function to compute the new velocity given the input parameters
 *
 */
class PID{
  double Kp;
  double Ki;
  double Kd;

 public:
  /**
   * @brief Initializes the class object.
   *
   * @param double kp - initial value of kp
   * @param double ki - initial value of ki
   * @param double kd - initial value of kd
   */
  PID(double kp, double ki, double kd) : Kp(kp), Ki(ki), Kd(kd) {}

  /**
   * @brief Computes the output based on the defined gains.
   *
   * @param targetSetpoint double Holding the target value
   * @param actualVelocity double Holding the actual value
   * @return double The output computed using the gains.
   */
  double compute(double targetSetpoint, double actualVelocity);
};
