#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->fixPointValue = 0;
}

Fixed::~Fixed()
{
    std::cout << "fixed point object destroyed" << std::endl;
}


Fixed::Fixed(const Fixed &obj)
{
    this->fixPointValue = obj.fixPointValue;
}

Fixed& Fixed::operator= (const Fixed &F)
{
    this->fixPointValue = F.fixPointValue;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->fixPointValue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixPointValue = raw;
}