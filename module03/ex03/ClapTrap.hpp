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
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator= (const ClapTrap &obj);
        ClapTrap();
        ~ClapTrap();
        virtual void attack(std::string const & target);
        virtual void takeDamage(unsigned int amount);
        virtual void beRepaired(unsigned int amount);
};

#endif
