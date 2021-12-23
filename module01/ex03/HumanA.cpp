#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &w): w(w)
{
    this->name = name;
}


void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->w.getType() << std::endl;
}