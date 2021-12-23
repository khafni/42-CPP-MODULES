#include "ScavTrap.hpp"

int main()
{
    ScavTrap ST("bibi");
    ST.attack("bobo");

    ScavTrap TS(ST);
    TS.attack("bebe");
    return (0);
}