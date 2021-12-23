#ifndef FIXED_H
# define FIXED_H
# include <iostream>
class Fixed 
{
    int fixPointValue;
    static const int FractValue = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator= (const Fixed &F);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif