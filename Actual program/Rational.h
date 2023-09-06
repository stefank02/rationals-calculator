//
// Created by Stefan Kichukov on 3/21/2022.
//
#include <iostream>
#include<numeric>
#include <cmath>
#include <fstream>
#ifndef TEST3_RATIONAL_H
#define TEST3_RATIONAL_H


class Rational {

private:
    int numerator{0};
    int denominator{0};
public:
    Rational()
    {
        numerator = denominator = 1;
    }
    Rational(int numerator_t , int denominator_t)
    {
        if(denominator_t>0) {
            numerator = numerator_t;
            denominator = denominator_t;
            simplify();
        }
        else{
            std::cout << "The fraction is invalid";
        }

    }
    Rational(int numerator_t)
    {
        numerator = numerator_t;
        denominator = 1;
    }
    Rational(const std::string& a)
    {
        int pos = a.find("/");
        std:: string numerator_temp = a.substr(0,pos);
        std:: string denominator_temp = a.substr(pos+1, a.length());
        numerator = std::stoi(numerator_temp,nullptr,10);
        denominator = std::stoi(denominator_temp,nullptr,10);
        if(denominator == 0)
        {
            std::cout << "The number is invalid "<<"\n";
            denominator = 1;

        }
        else
        {
            simplify() ;
        }
    }
    int num() const;
    int den() const;
    int lcm(int a , int b);
    void set_num (int a);
    void set_den(int a);
    void simplify();
    std::string from_int_to_string() const;
    double to_double() const;
    bool is_positive() const;
    bool is_negative() const;
    bool is_inf() const;
    bool is_nan() const;

};


#endif //TEST3_RATIONAL_H
