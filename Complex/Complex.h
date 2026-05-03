#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0);

    Complex operator+(const Complex &other) const;

    Complex operator-(const Complex &other) const;

    Complex operator-() const;

    Complex operator*(const Complex &other) const;

    bool operator==(const Complex &other) const;

    bool operator!=(const Complex &other) const;

    friend std::ostream &operator<<(std::ostream &out, const Complex &c);

    friend std::istream &operator>>(std::istream &in, Complex &c);
};

#endif