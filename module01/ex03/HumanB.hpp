#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
    Weapon      *w;
    std::string name;
    public:
        HumanB(std::string name);
        void attack(void);
        void setWeapon(Weapon *w);
};

#endif