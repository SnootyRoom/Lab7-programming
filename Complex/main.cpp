#include "Complex.h"
#include <iostream>

int main(int, char **)
{
    Complex value1(3.0, 4.0);
    Complex value2;
    
    std::cin >> value2;

    std::cout << "value1 = " << value1 << std::endl;
    std::cout << "value2 = " << value2 << std::endl;
    std::cout << "value1 + value2 = " << (value1 + value2) << std::endl;
    std::cout << "value1 * value2 = " << (value1 * value2) << std::endl;
    std::cout << "-value1 = " << -value1 << std::endl;
    return 0;
}