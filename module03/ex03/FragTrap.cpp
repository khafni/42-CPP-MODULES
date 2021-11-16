#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap named " << this->Name << " created" << std::endl;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 50;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->Name << " destroyed" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;    
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;   
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FragTrap " << this->Name << " got +" << amount << " HP" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high five " << std::endl;
}