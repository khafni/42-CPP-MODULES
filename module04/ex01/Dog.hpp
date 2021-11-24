#ifndef DOG_H
#define DOG_H
#pragma once
# include "Animal.hpp"	
# include "Brain.hpp"
class Dog: public Animal 
{
	Brain *b;
	protected:
		std::string type;
	public:

		Dog();
		~Dog();
		Dog(Dog &adog);
		Dog &operator = (const Dog &d);
		void set_ideas(std::string ideas);
		void get_ideas();

		void makeSound() const;
		std::string getType() const;
};
#endif