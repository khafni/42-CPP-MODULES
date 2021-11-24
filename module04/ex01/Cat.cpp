#include "Cat.hpp"  
	
Cat::Cat(): type("Cat")
{
	std::cout << "cat constructor called" << std::endl;
    this->b = NULL;
}

Cat::Cat(Cat &acat)
{
    this->b = new Brain;
    for (int i = 0; i < 100; i++)
		this->b->ideas[i] = acat.b->ideas[i]; 
}

Cat &Cat::operator = (const Cat &acat)
{
    this->b = new Brain;
    for (int i = 0; i < 100; i++)
		this->b->ideas[i] = acat.b->ideas[i];
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat distructor called" << std::endl;
    delete this->b;
}

void Cat::makeSound() const
{
    std::cout << "meow mow mrow mrrr prr prrt hh mrrrrrrrrrrawr mew rrrr e-e-e-e-e-e awr hiiiiiiiiiss mEEEwr aaaaaaaaaaaa" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
