#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp" 
#include <string>

class ScavTrap : public ClapTrap 
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
};
#endif