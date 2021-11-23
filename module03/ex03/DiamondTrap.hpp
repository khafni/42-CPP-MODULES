#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp" 
# include "ScavTrap.hpp" 
#include <iostream>

class DiamondTrap:  public FragTrap, public ScavTrap
{
    public:
    std::string Name;
    DiamondTrap(std::string Name);
    ~DiamondTrap();
    void get_data() const
    {
        std::cout << this->Hitpoints << std::endl;
    }
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void whoAmI();
};

#endif
