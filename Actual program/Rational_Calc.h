//
// Created by Stefan Kichukov on 3/21/2022.
//

#ifndef TEST3_RATIONAL_CALC_H
#define TEST3_RATIONAL_CALC_H
#include "Rational.h"

class Rational_Calc {
public:
    Rational Add(Rational a, Rational b);

    Rational Subtract(Rational a, Rational b);

    Rational Multiply(Rational a, Rational b);

    Rational Divide(Rational a, Rational b);

    Rational Pow(Rational a, int pow);

    Rational Calculate(std::string a, Rational a_t, Rational b,int n);
};


#endif //TEST3_RATIONAL_CALC_H
