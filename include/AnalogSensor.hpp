/**
 *  @copyright (c) 2019 Satyarth Praveen
 *  @file    AnalogSensor.hpp
 *  @author Satyarth Praveen
 *
 *  @brief Source file for the AnalogSensor Class with constructor, 
 *  destructor, and member function definitions.
 *
 */

#pragma once

#include <iostream>
#include <numeric>
#include <vector>
#include <memory>

/**
 * @brief The class AnalogSensor has private member mSamples and 
 * public constructor, destructor, and a member function to return 
 * average sensor reading. 
 *
 */
class AnalogSensor {
 public:
    /**
     * @brief Initializes the class object.
     *
     * @param unsigned int samples - number of samples 
     * @return returns an object of the AnalogSensor class.
     */
    explicit AnalogSensor(unsigned int samples);

    /**
     * @brief Blank class destructor.
     *
     * @param none
     * @return none
     */
    ~AnalogSensor();

    /**
     * @brief Returns average sensor reading.
     *
     * @param none
     * @return int average sensor reading
     */
    int Read();

 private:
    unsigned int mSamples;
};
