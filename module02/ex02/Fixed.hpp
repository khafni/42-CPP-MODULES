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
        int float_to_fixedint_rep(float value, int FractBItsNum);
        Fixed &operator= (const Fixed &F);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool    operator> (const Fixed& F2);
        bool    operator< (const Fixed& F2);
        bool    operator>= (const Fixed& F2);
        bool    operator<= (const Fixed& F2);
        bool    operator== (const Fixed& F2);
        bool    operator!= (const Fixed& F2);
        Fixed   operator+ (const Fixed& F2);
        Fixed   operator- (const Fixed& F2);
        Fixed   operator* (const Fixed& F2);
        Fixed   operator/ (const Fixed& F2);
        Fixed    operator++ ();
        Fixed    operator-- ();
        Fixed   operator++ (int);
        Fixed   operator-- (int);
        static  Fixed min(const Fixed &f1, const  Fixed &f2);
        static Fixed  max(const Fixed &f1,const Fixed &f2);
};

std::ostream& operator<<(std::ostream &obj, const Fixed &num);

#endif