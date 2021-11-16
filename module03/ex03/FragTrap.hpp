#ifndef FRRAGTRAP_H
# define FRRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        virtual void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void highFivesGuys(void);
};

#endif