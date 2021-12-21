#include "B.hpp"  
	
B::B()
{
	
}
	
B::~B()
{
	
}

B::B(const B& obj)
{
    (void)obj;

}

B &B::operator=(const B &obj)
{
    (void)obj;

    return (*this);
}