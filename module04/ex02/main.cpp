#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
int main()
{
    // Animal *an_arr[100];
    // for (int i = 0; i < 50; i++)
    //     an_arr[i] = new Dog;
    // for (int i = 50; i < 100; i++)
    //     an_arr[i] = new Cat; 
    // for (int i = 0; i < 100; i++)
    //     delete an_arr[i];
    Dog* j = new Dog();
    j->set_ideas("dude");
    j->get_ideas();
    
    Dog k(*j);
    //const Animal* i = new Cat();
    k.get_ideas();
    delete j;//should not create a leak
    //delete i;
    return (0);
}