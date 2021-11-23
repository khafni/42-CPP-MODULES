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
		void makeSound() const;
		std::string getType() const;
};
#endif