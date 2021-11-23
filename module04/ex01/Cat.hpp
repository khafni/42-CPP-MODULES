#ifndef CAT_H
#define CAT_H
#pragma once
# include "Animal.hpp"
# include "Brain.hpp"
	
class Cat: public Animal 
{
	Brain *b;
	protected:
		std::string type;
	public:

		Cat();
		~Cat();
		Cat(Cat &acat);
		void makeSound() const;
		std::string getType() const;
};
#endif