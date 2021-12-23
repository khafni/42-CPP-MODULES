#include "Animal.hpp"  
#include <iostream>
	
Animal::Animal(): type("")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    this->type = obj.type;
}

Animal &Animal::operator= (const Animal &obj)
{
    this->type = obj.type;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal distructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "**animal sound**" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
