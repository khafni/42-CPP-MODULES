#include "Fixed.hpp"
#include <iostream>

int main()
{
    Fixed f(1234.4321f);
    std::cout << f.toInt() << std::endl;
    std::cout << f.toFloat() << std::endl;
    std::cout << f << std::endl;
    return (0);
}