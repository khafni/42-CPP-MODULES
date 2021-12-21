#include "C.hpp"  
	
C::C()
{
	
}
	
C::~C()
{
	
}

C::C(const C& obj)
{
       (void)obj;

}

C &C::operator=(const C& obj)
{
    (void)obj;
    return (*this);
}