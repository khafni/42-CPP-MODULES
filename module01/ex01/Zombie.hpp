#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
#include <string>


class Zombie {
    private:
        std::string name;
    public:
        void anounce(void);
        Zombie(std::string name);
        Zombie();
        void Zombie_set_name(std::string name);
        ~Zombie();
};

Zombie* newZombie( std::string name);//remove
void randomChump( std::string name );//remove
Zombie* zombieHorde( int N, std::string name );
#endif