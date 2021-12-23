#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->w = NULL;
}

void HumanB::setWeapon(Weapon *w)
{
    this->w = w;
}

void HumanB::attack(void)
{
    if (!this->w)
        std::cout << this->name << " can't attack because he got no weapon" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->w->getType() << std::endl;
}

