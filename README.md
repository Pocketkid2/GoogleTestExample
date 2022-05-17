# GoogleTestExample [![Actions Status: CMake Tests](https://github.com/Pocketkid2/GoogleTestExample/workflows/CMake%20Tests/badge.svg)](https://github.com/Pocketkid2/GoogleTestExample/actions?query=workflow%3A"CMake+Tests")

An example of an extremely basic C++ library (exponent with unsigned 64 bit integers) that uses GoogleTest unit testing framework 

## Building
Assuming you already have CMake and Make already installed, you can run the following:
```
cmake -S . -B build
cmake --build build
```
The unit test executable is at `build/exponent_test` and the main program executable is at `build/exponent`
