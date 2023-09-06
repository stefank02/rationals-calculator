//
// Created by Stefan Kichukov on 3/21/2022.
//

#ifndef TEST3_RATIONAL_PROCESSOR_H
#define TEST3_RATIONAL_PROCESSOR_H
#include "Rational.h"
#include "Rational_Calc.h"
class Rational_Processor {
public:
    std::string choice;
    void choice_func();
    bool opened(std::string file_name);
    void file_operations(std::string file_name);
};


#endif //TEST3_RATIONAL_PROCESSOR_H
