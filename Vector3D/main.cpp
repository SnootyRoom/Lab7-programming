#include "Vector3D.h"
#include <iostream>

int main()
{   
    double scalar = 3.72;
    Vector3D vector1(1.3, 7.4, 9.3);
    Vector3D vector2(-5.0, -1.4, 4.11);

    std::cout<<"Vector1"<<std::endl;
    vector1.print();

    std::cout<<"Vector2"<<std::endl;
    vector2.print();

    Vector3D sumVector = vector1 + vector2;
    Vector3D subVector = vector1 - vector2;

    Vector3D mulVectorV1 = vector1 * scalar;
    Vector3D mulVectorV2 = scalar * vector1;

    double mulOfVector = vector1 * vector2;

    std::cout<<"Operations "<<std::endl;
    std::cout<<"+ ";
    sumVector.print();
    std::cout<<"- ";
    subVector.print();
    std::cout<<"Mul with scalar = "<<scalar<<" and Vector1"<<std::endl;
    mulVectorV1.print();
    mulVectorV2.print();
    std::cout<<"Mul of vectors"<<std::endl;
    std::cout<<mulOfVector<<std::endl;

    std::cout<<"Comparison of vectors"<<std::endl;
    std::cout<<"Vector1 > Vector2: "<<(vector1 > vector2 ? "True" : "False")<<std::endl;
    std::cout<<"Vector1 < Vector2: "<<(vector1 < vector2 ? "True" : "False")<<std::endl;

    return 0;
}