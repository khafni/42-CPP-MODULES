#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    this->name = " zombie";
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->name << " died" << std::endl;
}

void Zombie::anounce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::Zombie_set_name(std::string name)
{
    this->name = name;
}