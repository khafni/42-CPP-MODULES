#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string Name): ClapTrap(Name + "_clap_name"), FragTrap(Name), ScavTrap(Name)
{
    this->Name = Name;
    std::cout << "DiamondTrap named " << this->Name << " created" << std::endl; 
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage; 
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " destroyed" << std::endl;
}
DiamondTrap::DiamondTrap (const DiamondTrap &obj): ClapTrap(obj.Name + "_clap_name"), FragTrap(obj.Name), ScavTrap(obj.Name) 
{

}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
   // std::cout << "DiamondTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
   this->ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    std::cout << "DiamondTrap " << this->Name << " took " << amount << " points of damage!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    std::cout << "DiamondTrap " << this->Name << " got +" << amount << " HP" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "my diamond name is : " << this->Name << std::endl;
    std::cout << "my clapTrap name is : " << ClapTrap::Name << std::endl;
}
