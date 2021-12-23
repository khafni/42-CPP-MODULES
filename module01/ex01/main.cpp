#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(10, "donc");
    z[9].anounce();
    delete [] z;
    return (0);
}