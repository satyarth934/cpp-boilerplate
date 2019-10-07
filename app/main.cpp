/**
 *  @copyright (c) 2019 Satyarth Praveen
 *  @file    main.cpp
 *  @author  Satyarth Praveen
 *
 *  @brief Print the averaged sensor reading from the AnalogSensor object.
 *
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
