#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
#include <string>

class HumanA {
    Weapon      w;
    std::string name;
    public:
        HumanA(std::string name, Weapon w);
        void attack(void);
};

#endif