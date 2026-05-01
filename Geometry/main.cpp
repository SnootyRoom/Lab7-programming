#include "Geometry.h"
#include <iostream>

int main(int, char **)
{   
    double radius = 5.124;
    double aRect = 7.11, bRect = 8.9;
    double aTri = 3.5, bTri = 7.1, cTri = 4.1;

    double circleSquare = Geometry::area(radius);
    double rectangleSquare = Geometry::area(aRect, bRect);
    double triangleSquare = Geometry::area(aTri, bTri, cTri);

    std::cout<<"Circle"<<std::endl;
    std::cout<<"Radius: "<<radius<<std::endl;
    std::cout<<"Square: "<<circleSquare<<std::endl;

    std::cout<<std::endl;

    std::cout<<"Rectangle"<<std::endl;
    std::cout<<"Sides: "<<aRect<<" "<<bRect<<std::endl;
    std::cout<<"Square: "<<rectangleSquare<<std::endl;

    std::cout<<std::endl;

    std::cout<<"Triangle"<<std::endl;
    std::cout<<"Sides: "<<aTri<<" "<<bTri<<" "<<cTri<<std::endl;
    std::cout<<"Square: "<<triangleSquare<<std::endl;


    return 0;
}