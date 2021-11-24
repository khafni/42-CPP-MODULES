#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal(): type("")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
	
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal distructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "**animal sound**" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
