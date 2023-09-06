//
// Created by Stefan Kichukov on 3/21/2022.
//

#include "Rational_Processor.h"

void Rational_Processor::choice_func() {
    Rational_Calc rationalCalc;
    if (choice == "by_hand") {
        Rational a, b;
        std::string expression;
        int n;
        std::getline(std::cin, expression);
        int temp = expression.find_first_of(' ');
        a = expression.substr(0,temp);
        choice = expression.at(temp+1);
        if(choice != "^")
        {
            b = expression.substr(temp + 2, expression.length());
        }
        else
        {
            std:: string a;
            a = expression.substr(temp + 3, 1);
            n = std::stoi(a);
        }
        rationalCalc.Calculate(choice,a,b,n);
    }
    else if (choice == "from_file")
    {
        std::string file_name;
        std::cout << "Enter file name here:";
        std::cin >> file_name;
        file_operations(file_name);

    }
}
void Rational_Processor::file_operations(std::string file_name) {
    std::ifstream file{file_name};
    std::string expression;
    if(!file)
    {
        std::cout<< "The file name is not correct";
        exit(0);
    }
    else {
        while (std::getline(file, expression))
        {
            Rational a, b,temp1;
            int n;
            Rational_Calc rationalCalc;
            int temp = expression.find_first_of(' ');
            int temp2 = expression.length() - (temp +2);
            a = expression.substr(0, temp);
            choice = expression.at(temp + 1);
            if(choice != "^")
            {
                b = expression.substr(temp + 2, expression.length());
            }
            else
            {
                std:: string a;
                a = expression.substr(temp + 2, expression.length());
                n = std::stoi(a);
            }
            rationalCalc.Calculate(choice, a, b,n);
        }
    }
}
bool Rational_Processor::opened(std::string file_name) {
    std::ifstream file{file_name};
    if (!file) {
        std::cout << "File not opened!Error!" << std::endl;
        return false;
    } else {
        return true;
    }
}