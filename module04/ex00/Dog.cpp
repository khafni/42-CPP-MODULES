#include "Dog.hpp"  
#include <iostream>
#include <iterator>
	
Dog::Dog(): type("Dog")
{
	std::cout << this->type << " instance constructor called" << std::endl;
}
	
Dog::~Dog()
{
	std::cout << "Dog instance distructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	this->type = obj.type;
}
Dog &Dog::operator= (const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "wuff ouff owff wowff waff" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
