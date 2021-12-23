#include "WrongCat.hpp"  
	
WrongCat::WrongCat(): type("WrongCat")
{
	std::cout << "Wrongcat constructor called" << std::endl;
}
	
WrongCat::~WrongCat()
{
	std::cout << "Animal constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &obj)
{
    this->type = obj.type;
}
WrongCat &WrongCat::operator= (const WrongCat &obj)
{
    this->type = obj.type;
    return (*this);
}	
void WrongCat::makeSound() const
{
    std::cout << "pew pew pew" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}
