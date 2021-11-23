#include "Cat.hpp"  
	
Cat::Cat(): type("Cat")
{
	std::cout << "cat constructor called" << std::endl;
}
	
Cat::~Cat()
{
	std::cout << "Animal constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow mow mrow mrrr prr prrt hh mrrrrrrrrrrawr mew rrrr e-e-e-e-e-e awr hiiiiiiiiiss mEEEwr aaaaaaaaaaaa" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
