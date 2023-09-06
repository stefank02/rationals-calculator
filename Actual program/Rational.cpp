//
// Created by Stefan Kichukov on 3/21/2022.
//

#include "Rational.h"
void Rational::simplify()
{
    int r;
    if(denominator<0 && numerator>0){
        denominator = abs(denominator);
        numerator = -numerator;
    }

    for (int i = 1; i <= numerator && i <= denominator; ++i)
    {
        if(abs(numerator)%i == 0 && abs(denominator)%i == 0)
        {
            r = i;
            numerator = numerator/r;
            denominator = denominator/r;
            i=1;
        }
    }

}
int Rational::num() const {
    return numerator;
}
int Rational::den() const {
    return denominator;
}

int Rational::lcm(int a , int b) {
    return  (a*b)/std::gcd(a, b);

}
void Rational::set_num(int a)
{
    simplify();
    numerator = a;
    simplify();
}
void Rational::set_den(int a)
{
    if(a!=0)
    {
        simplify();
        denominator = a;
        simplify();
    }
    else {std::cout << "The number is invalid "<<"\n";}

}

std::string Rational::from_int_to_string() const
{
    std::string temp1 = std::to_string(numerator);
    std::string temp2 = std::to_string(denominator);
    std:: string final = temp1 + '/' + temp2;
    return final;

}
double Rational::to_double() const
{
    double temp;
    temp = numerator/denominator;
    return temp;
}

bool Rational::is_positive() const
{
    bool positive = false;
    if ( numerator > 0 && denominator > 0 ){positive= true;}
    else if(numerator<0&&denominator<0){positive= true;}
    return positive;

}
bool Rational::is_negative() const
{
    auto temp = false;
    if((numerator<0&&denominator>0) || (numerator>0&&denominator<0)){temp = true;}
    return temp;
}
bool Rational::is_inf() const
{
    bool  a = false;
    if(denominator == 0)
    {
        a = true;
    }
    return a;

}
bool Rational::is_nan() const {
    bool a = false;
    if (denominator == 0 && numerator == 0) {a = true;}
    return a;
}