#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal  
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getType() const;
};
#endif