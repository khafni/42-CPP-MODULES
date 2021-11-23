#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
int main()
{
    Animal *an_arr[100];
    for (int i = 0; i < 50; i++)
        an_arr[i] = new Dog;
    for (int i = 50; i < 100; i++)
        an_arr[i] = new Cat; 
    for (int i = 0; i < 100; i++)
        delete an_arr[i]; 
    return (0);
}