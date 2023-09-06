//
// Created by Stefan Kichukov on 3/21/2022.
//

#include "Rational_Calc.h"
Rational Rational_Calc::Add(Rational a, Rational b) {
    Rational temp;
    Rational result;
    if(a.den() == b.den()){
        result = { a.num()+b.num() , a.den()};

    }else {
        int lcm = temp.lcm(a.den(), b.den());
        int a_new = a.num() * b.den();
        int b_new = b.num() * a.den();
        result = {a_new + b_new, lcm};

    }
    return result;
}
Rational Rational_Calc::Subtract(Rational a, Rational b) {
    Rational temp;
    int lcm = temp.lcm(a.den(),b.den());
    int a_new = a.num() * b.den();
    int b_new = b.num() * a.den();
    Rational result = {a_new-b_new,lcm};


    return result;
}
Rational Rational_Calc::Multiply(Rational a, Rational b) {
    Rational result{a.num() * b.num(), a.den() * b.den()};

    return result;
}
Rational Rational_Calc::Divide(Rational a, Rational b) {
    Rational result{a.num() * b.den(), a.den() * b.num()};

    return result;
}
Rational Rational_Calc::Pow(Rational a, int n) {
    if (n == 0) return {1, 1};
    else {
        int x = a.num();
        int y = a.den();
        x = pow(x, n);
        y = pow(y, n);
        a = {x, y};
    }

    return a;
}
Rational Rational_Calc::Calculate(std::string a, Rational a_t, Rational b, int n) {
    Rational temp;
    if (a=="+")
    {
        temp = Rational_Calc::Add(a_t,b);
    }
    else if (a=="-")
    {
        temp = Rational_Calc::Subtract(a_t,b);
    }
    else if (a=="*")
    {
        temp = Rational_Calc::Multiply(a_t,b);
    }
    else if (a=="/")
    {
        temp = Rational_Calc::Divide(a_t,b);

    }
    else if ( a == "^")
    {
        temp= Rational_Calc::Pow(a_t,n);

    }
    temp.simplify();
    std::cout << temp.num() << "/" << temp.den()<<"\n";
    return temp;
}