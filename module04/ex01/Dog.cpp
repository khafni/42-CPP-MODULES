#include "Dog.hpp"  
#include <iostream>
#include <iterator>
#include <streambuf>
	
Dog::Dog(): type("Dog")
{
	std::cout << this->type << " instance constructor called" << std::endl;
	this->b = NULL;
}

Dog::Dog(Dog &adog)
{	
	this->b = new Brain;
	for (int i = 0; i < 100; i++)
		this->b->ideas[i] = adog.b->ideas[i];
}
	
Dog::~Dog()
{
	std::cout << "Dog instance distructor called" << std::endl;
	delete this->b;
}

void Dog::makeSound() const
{
	std::cout << "wuff ouff owff wowff waff" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}
