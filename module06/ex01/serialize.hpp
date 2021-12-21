#ifndef SERIALIZE_H
# define SERIALIZE_H
#include <iostream>

class weapon
{
    std::string name;
    std::string type;
    int         power_level;

    public:
        weapon(std::string name, std::string type, int power_level);
        weapon();
        weapon(const weapon &obj);
        weapon &operator= (const weapon &obj);
        void weapon_display();
};

uintptr_t serialize(weapon* ptr);
weapon* deserialize(uintptr_t raw);

#endif