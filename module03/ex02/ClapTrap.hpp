#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <string>
# include <iostream>
class ClapTrap
{ 
    protected:
        std::string Name;
        int         Hitpoints;
        int         Energy_points;
        int         Attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator= (const ClapTrap &obj);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
