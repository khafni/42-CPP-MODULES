#include "Fixed.hpp"
#include <algorithm>

int main()
{
    Fixed F;
    F.setRawBits(420);
    std::cout << F.getRawBits() << std::endl;
    return (0);
}