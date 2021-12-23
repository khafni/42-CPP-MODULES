#include "ClapTrap.hpp"
ClapTrap::ClapTrap(std::string Name) : Name(Name)
{
    std::cout << "ClapTrap named: " << Name <<  " constructed" << std::endl;
    this->Hitpoints = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0;
}


ClapTrap::ClapTrap(const ClapTrap &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << " Clap Trap object distructed" << std::endl;
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