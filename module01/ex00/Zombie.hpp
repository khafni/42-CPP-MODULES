#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
#include <string>


class Zombie {
    std::string name;
    public:
        void anounce(void);
        Zombie(std::string name="unkow");
        ~Zombie();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );
#endif