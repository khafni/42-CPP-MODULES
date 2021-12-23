#ifndef FRRAGTRAP_H
# define FRRAGTRAP_H
# include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
    
    public: 
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap (const FragTrap &obj);
        FragTrap &operator= (const FragTrap &obj);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif