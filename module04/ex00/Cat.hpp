#ifndef CAT_H
#define CAT_H
#pragma once
# include "Animal.hpp"
	
class Cat: public Animal 
{
	protected:
		std::string type;
	public:

		Cat();
		~Cat();
		Cat(const Cat &obj);
		Cat &operator= (const Cat &obj);
		void makeSound() const;
		std::string getType() const;
};
#endif