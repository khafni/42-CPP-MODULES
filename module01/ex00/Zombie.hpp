#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
#include <string>


class Zombie {
    private:
        std::string name;
    public:
        void anounce(void);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );
#endif