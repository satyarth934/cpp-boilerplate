/**
 *  @copyright (c) 2019 Satyarth Praveen
 *  @file    AnalogSensor.cpp
 *  @author Satyarth Praveen
 *
 *  @brief Source file for the AnalogSensor Class with constructor, 
 *  destructor, and member function definitions.
 *
 */

#include <AnalogSensor.hpp>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::shared_ptr<std::vector<int>> readings =
        std::make_shared<std::vector<int>>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0)
        / readings->size();

    return result;
}


