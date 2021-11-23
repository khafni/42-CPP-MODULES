#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    //Animal a;
    Animal *meta = new Animal();
     
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    WrongCat wc;
    wc.makeSound();
    delete meta;
    delete j;
    delete i;
    return (0);
}