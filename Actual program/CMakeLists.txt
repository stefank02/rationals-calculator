cmake_minimum_required(VERSION 3.21)
project(test3)

set(CMAKE_CXX_STANDARD 20)

add_executable(test3 main.cpp Rational.cpp Rational.h Rational_Calc.cpp Rational_Calc.h Rational_Processor.cpp Rational_Processor.h)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror -Wall -Wextra -pedantic")