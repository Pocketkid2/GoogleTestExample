# GoogleTestExample  ![Cmake Tests](https://github.com/Pocketkid2/GoogleTestExample/actions/workflows/cmake.yml/badge.svg)


An example of an extremely basic C++ library (exponent with unsigned 64 bit integers) that uses GoogleTest unit testing framework 

## Building
Assuming you already have CMake and Make already installed, you can run the following:
```
cmake -S . -B build
cmake --build build
```
The unit test executable is at `build/exponent_test` and the main program executable is at `build/exponent`
