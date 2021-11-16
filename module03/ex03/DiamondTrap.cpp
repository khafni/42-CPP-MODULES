#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap named " << this->Name << " created" << std::endl;

}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->Name << " destroyed" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{

}

void DiamondTrap::takeDamage(unsigned int amount)
{

}

void DiamondTrap::beRepaired(unsigned int amount)
{

}
