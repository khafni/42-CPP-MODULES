#ifndef WRONGCAT_H
#define WRONGCAT_H
#pragma once
#include "WrongAnimal.hpp"	

class WrongCat  
{
	protected:
		std::string type;
	public:

		WrongCat();
		~WrongCat();
	
		void makeSound() const;
		std::string getType() const;
};
#endif