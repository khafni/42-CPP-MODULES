#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp" 
# include "ScavTrap.hpp" 
#include <iostream>

class DiamondTrap:  public FragTrap, public ScavTrap
{
    std::string Name;
    public:
    DiamondTrap(std::string Name);
    ~DiamondTrap();
    DiamondTrap (const DiamondTrap &obj);
    DiamondTrap &operator= (const DiamondTrap &obj);
    // void get_data() const
    // {
    //     std::cout << this->Hitpoints << std::endl;
    // }
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void whoAmI();
};

#endif
