#include "Cat.hpp"  
	
Cat::Cat(): type("Cat")
{
	std::cout << "cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    this->type = obj.type;
}

Cat &Cat::operator= (const Cat &obj)
{
    this->type = obj.type;
    return (*this);
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
