#ifndef FRRAGTRAP_H
# define FRRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : virtual ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif