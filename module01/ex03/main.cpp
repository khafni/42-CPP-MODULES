#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    Weapon club = Weapon("ak-47");
    HumanA joe("joe", club);
    HumanB bob("bob");
    joe.attack();
    bob.attack();
    bob.setWeapon(&club);
    bob.attack();
    //const char *p = NULL;
    return 0;
}