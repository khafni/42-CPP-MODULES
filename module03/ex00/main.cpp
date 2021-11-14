#include "ClapTrap.hpp"

int main()
{
    ClapTrap CT("slime");
    CT.attack("dragon");
    CT.takeDamage(3);
    CT.beRepaired(420);
    return (0);
}