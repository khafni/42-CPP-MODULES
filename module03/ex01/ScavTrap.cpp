#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap()
{
    std::cout << "weshhhhhh" << std::endl;
     std::cout << this->Hitpoints;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "looool" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << this->Hitpoints;
    std::cout << ":)";
}