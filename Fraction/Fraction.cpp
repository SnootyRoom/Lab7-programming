#include "Fraction.h"
#include <numeric>
#include <iostream>
#include <stdexcept>

Fraction::Fraction(int numerator, unsigned int denominator) : numerator(numerator), denominator(denominator)
{
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero!");
    }
    int gcd = std::gcd(this->numerator, this->denominator);

    this->numerator = this->numerator / gcd;
    this->denominator = this->denominator / gcd;
       
}

Fraction Fraction::operator+(const Fraction &other)
{
    int newNumerator = this->numerator * other.denominator + other.numerator * this->denominator;
    unsigned int newDenominator = this->denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator-(const Fraction &other)
{
    int newNumerator = this->numerator * other.denominator - other.numerator * this->denominator;
    unsigned int newDenominator = this->denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator*(const Fraction &other)
{
    int newNumerator = this->numerator * other.numerator;
    unsigned int newDenominator = this->denominator * other.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator/(const Fraction &other)
{
    int newNumerator = this->numerator * other.denominator;
    unsigned int newDenominator = this->denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
}

void Fraction::print() const
{   
    std::cout << this->numerator << "/" << this->denominator << std::endl;
}
