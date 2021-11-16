#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp" 
# include "ScavTrap.hpp" 

class DiamondTrap:  public FragTrap, public ScavTrap
{
    public:
    // std::string Name;
    DiamondTrap(std::string name);
    ~DiamondTrap();

    virtual void attack(std::string const & target);
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);

};

#endif
