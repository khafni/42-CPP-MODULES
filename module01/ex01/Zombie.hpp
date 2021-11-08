#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
#include <string>


class Zombie {
    std::string name;
    public:
        void anounce(void);
        Zombie(std::string name);
        Zombie();
        void Zombie_set_name(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif