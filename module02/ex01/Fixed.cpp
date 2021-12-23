#include "Fixed.hpp"
#include <iostream>
#include <cmath>


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

Fixed::Fixed(const int value)
{
    this->fixPointValue = (value << this->FractBItsNum);
}

Fixed::Fixed(const float value)
{
    this->fixPointValue = roundf((value * (1 << this->FractBItsNum)));
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

float Fixed::toFloat( void ) const
{
    return (float(this->fixPointValue) / float((1 << this->FractBItsNum)));
}

int Fixed::toInt( void ) const
{
    return (this->fixPointValue >> this->FractBItsNum);
}

std::ostream& operator<<(std::ostream &obj, Fixed num)
{
    obj << num.toFloat();
    return (obj);
}
