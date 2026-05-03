#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
    private:
        double x;
        double y;
        double z;
    
    public:
        Vector3D(double x, double y, double z);

        Vector3D operator+(const Vector3D &other) const;
        Vector3D operator-(const Vector3D &other) const;


        friend Vector3D operator*(const Vector3D &vector3D, const double &scalar);
        friend Vector3D operator*(const double &scalar, const Vector3D &vector3D);

        friend double operator*(const Vector3D& vector3D1, const Vector3D& vector3D2);

        void print() const;


        bool operator<(const Vector3D &other) const;
        bool operator>(const Vector3D &other) const;

        double getLength() const;
};

#endif