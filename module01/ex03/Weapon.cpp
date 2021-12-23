#include "Weapon.hpp"
#include <string>


const std::string &Weapon::getType(void)
{
    const std::string &type = this->type;
    return (type);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}