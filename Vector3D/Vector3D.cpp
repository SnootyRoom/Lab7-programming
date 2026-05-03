#include "Vector3D.h"
#include <iostream>
#include <cmath>

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3D Vector3D::operator+(const Vector3D &other) const
{
    return Vector3D(this->x + other.x, this->y + other.y, this->z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D &other) const
{
    return Vector3D(this->x - other.x, this->y - other.y, this->z - other.z);
}

Vector3D operator*(const Vector3D &vector3D, const double &scalar)
{
    return  Vector3D(vector3D.x * scalar, vector3D.y * scalar, vector3D.z * scalar);
}

Vector3D operator*(const double &scalar, const Vector3D &vector3D)
{
    return vector3D * scalar;
}

double operator*(const Vector3D& vector1, const Vector3D& vector2)
{
    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
}

double Vector3D::getLength() const
{
    return std::sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

bool Vector3D::operator<(const Vector3D &other) const
{   
    return this->getLength() < other.getLength();
}

bool Vector3D::operator>(const Vector3D &other) const
{
    return this->getLength() > other.getLength();
}   

void Vector3D::print() const 
{
    std::cout << "{" << this->x << ", " << this->y << ", " << this->z << "}"<<std::endl;
}