#include "Dog.hpp"  
#include <iostream>
#include <iterator>
#include <streambuf>
	
Dog::Dog(): type("Dog"), b(new Brain())
{
	std::cout << this->type << " instance constructor called" << std::endl;
	//this->b = NULL;
}

Dog::Dog(Dog &adog)
{	
	this->b = new Brain;
	for (int i = 0; i < 100; i++)
		this->b->ideas[i] = adog.b->ideas[i];
}

Dog &Dog::operator = (const Dog &adog)
{
	this->b = new Brain;
	for (int i = 0; i < 100; i++)
		this->b->ideas[i] = adog.b->ideas[i];
	return (*this);
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

void Dog::set_ideas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->b->ideas[i] = idea;	
}

void Dog::get_ideas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->b->ideas[i] << std::endl;
}