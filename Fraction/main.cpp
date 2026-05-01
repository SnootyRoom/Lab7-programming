#include "Fraction.h"
#include <iostream>

int main(int, char **)
{

    Fraction fraction1(4, 3);
    Fraction fraction2(6, 7);

    std::cout<<"Fraction 1"<<std::endl;
    fraction1.print();

    std::cout<<"Fraction 2"<<std::endl;
    fraction2.print();

    Fraction sumFraction = fraction1 + fraction2;
    Fraction subFraction = fraction1 - fraction2;
    Fraction mulFraction = fraction1 * fraction2;
    Fraction divFraction = fraction1 / fraction2;
    std::cout<<"Operations with fractions"<<std::endl;
    std::cout<<"+ ";
    sumFraction.print();
    std::cout<<"- ";
    subFraction.print();
    std::cout<<"* ";
    mulFraction.print();
    std::cout<<"/ ";
    divFraction.print();

    return 0;
}