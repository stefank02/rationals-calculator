//
// Created by Stefan Kichukov on 3/21/2022.
//
#include <iostream>
#include "Rational_Processor.h"
int main() {
     Rational_Processor rational;
    std::cout << "Enter your choice here (by_hand or from_file):";
    std::getline(std::cin, rational.choice);
    rational.choice_func();
    return 0;
}
