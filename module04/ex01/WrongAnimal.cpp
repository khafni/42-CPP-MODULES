#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal(): type("")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
	
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal distructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
}
WrongAnimal &WrongAnimal::operator= (const WrongAnimal &obj)
{
    this->type = obj.type;
    return (*this);
}
void WrongAnimal::makeSound() const
{
    std::cout << "**animal sound**" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
