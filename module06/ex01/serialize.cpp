#include "serialize.hpp"


weapon::weapon(std::string name, std::string type, int power_level)
{
    this->name = name;
    this->type = type;
    this->power_level = power_level;
}

void weapon::weapon_display()
{
    std::cout << "name: " << name << std::endl;
    std::cout << "type: " << type << std::endl;
    std::cout << "power_level: " << power_level << std::endl;
}

uintptr_t serialize(weapon* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


weapon* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<weapon*>(raw));
}