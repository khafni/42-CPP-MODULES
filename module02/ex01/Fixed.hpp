#ifndef FIXED_H
# define FIXED_H
#include <algorithm>
# include <iostream>

class Fixed 
{
    int fixPointValue;
    static const int FractBItsNum = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int value);
        Fixed(const float value);
        Fixed &operator= (const Fixed &F);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &obj, Fixed num);


#endif