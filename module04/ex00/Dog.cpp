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

void Dog::makeSound() const
{
	std::cout << "wuff ouff owff wowff waff" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
