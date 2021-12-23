#ifndef DOG_H
#define DOG_H
#pragma once
# include "Animal.hpp"	
class Dog: public Animal 
{
	protected:
		std::string type;
	public:

		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator= (const Dog &obj);
		void makeSound() const;
		std::string getType() const;
};
#endif