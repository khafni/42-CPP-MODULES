#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon {
    std::string type;
    public:
        const std::string &getType(void);
        void    setType(std::string newType);
        Weapon(std::string type);
};

#endif