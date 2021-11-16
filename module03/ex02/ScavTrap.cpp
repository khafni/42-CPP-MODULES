#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap named " << this->Name << " created" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->Name << " destroyed" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;    
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
   
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "ScavTrap " << this->Name << " got +" << amount << " HP" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " enterred Gate keeper mode" << std::endl;
}