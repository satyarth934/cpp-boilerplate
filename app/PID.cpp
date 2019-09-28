/**
 *  @copyright (c) 2019 Satyarth Praveen, Ishan Patel
 *  @file    PID.cpp
 *  @author Part 1:  Satyarth Praveen (driver), Ishan Patel (navigator)
 *  @author Part 2:  Charan Karthikeyan (driver), Corbyn Yhap (navigator)
 *
 *  @brief Source file for the PID class and its members.
 *
 *
 */


#include <PID.hpp>

double PID::compute(double targetSetpoint, double actualVelocity) {
  // enter your code here
  double dt = 1;
  double error = targetSetpoint-actualVelocity;
  double propotional = Kp*error;
  double integral = Ki*error*dt;
  double differential = Kd*error/dt;

  return propotional + integral + differential;
}
