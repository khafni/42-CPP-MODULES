#include "A.hpp"  
	
A::A()
{
	
}
	
A::~A()
{
	
}

A::A(const A& obj)
{
    (void)obj;
}

A &A::operator=(const A& obj)
{
    (void)obj;
    return (*this);
}