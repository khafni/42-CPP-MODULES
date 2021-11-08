#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon w)
{
    this->name = name;
    this->w = w;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->w.getType() << std::endl;
}