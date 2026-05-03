#include "Complex.h"
#include <iostream>

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

Complex Complex::operator+(const Complex &other) const
{
    return Complex(this->real + other.real, this->imag + other.imag);
}

Complex Complex::operator-(const Complex &other) const
{
    return Complex(this->real - other.real, this->imag - other.imag);
}

Complex Complex::operator-() const
{
    return Complex(-this->real, -this->imag);
}

Complex Complex::operator*(const Complex &other) const
{
    return Complex(this->real * other.real - this->imag * other.imag, this->real * other.imag + this->imag * other.real);
}

bool Complex::operator==(const Complex &other) const
{
    return this->real == other.real && this->imag == other.imag;
}

bool Complex::operator!=(const Complex &other) const
{
    return !(*this == other);
}

std::ostream &operator<<(std::ostream &out, const Complex &c)
{
    out << c.real << (c.imag >= 0 ? "+" : "") << c.imag << "i";
    return out;
}

std::istream &operator>>(std::istream &in, Complex &c)
{
    std::cout << "Real: "; in >> c.real;
    std::cout << "Imag: "; in >> c.imag;
    return in;
}