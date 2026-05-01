#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
private:
    int numerator;
    unsigned int denominator;

    void reduce();

public:
    Fraction(int numerator, unsigned int denominator);

    Fraction operator+(const Fraction &other);
    Fraction operator-(const Fraction &other);
    Fraction operator*(const Fraction &other);
    Fraction operator/(const Fraction &other);

    void print() const;
};

#endif