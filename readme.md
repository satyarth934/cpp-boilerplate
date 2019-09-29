# C++ Boilerplate
[![Build Status](https://travis-ci.org/Charan-Karthikeyan/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/Charan-Karthikeyan/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/Charan-Karthikeyan/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/Charan-Karthikeyan/cpp-boilerplate?branch=master)
---

## Authors
Satyarth Praveen (Driver)
Ishan Patel (Navigator)

Part 2:
Charan Karthikeyan (Driver)
Corbyn Yhap (Navigator)
## Overview

A simple exercise to demonstrate a Test-Driven development environment.

## Standard install via command-line
```
git clone --recursive https://github.com/satyarth934/cpp-boilerplate.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## TODO/ Things to improve
Currently the class implemented has only one function. That function is currently being tested,
however this class can be improved in a couple of ways. One could add a function to adjust the gains
in order to bring the actaul velocity closer to the target velocity. In this implementation we
assume that the value of dt to be 1 second, however this can be improved by allowing the user to 
adjust the value as needed.We would then need to update the tests to include these new functions. 
Ultimately the class currently passes the original class design. Once the implementation was 
complete, the test cases completed in travis built sucessfully and covaerage of the files was 
calculated to be 100%.  



