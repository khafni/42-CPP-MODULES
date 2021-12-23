#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie::Zombie()
{
    this->name = "";
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->name << " died" << std::endl;
}

void Zombie::anounce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
