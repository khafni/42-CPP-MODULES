#include "ClapTrap.hpp"
ClapTrap::ClapTrap(std::string Name) : Name(Name)
{
    std::cout << "object constructed" << std::endl;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "object distructed" << std::endl;
}
void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
   
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name << " got +" << amount << " HP" << std::endl;
}