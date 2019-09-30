/**
 *  @copyright (c) 2019 Satyarth Praveen, Ishan Patel
 *  @file    main.cpp
 *  @author  Satyarth Praveen, Ishan Patel
 *
 *  @brief Using the PID class to compute the output
 *  given the target setpoint and actual velocity.
 *
 */

#include <iostream>
#include <PID.hpp>

int main() {
	PID pidObj(5, 3, 3);
	double output = pidObj.compute(100, 20);
	std::cout << "Output for the given PID gains and velocity values: " << output << std::endl;
	return 0;
}
