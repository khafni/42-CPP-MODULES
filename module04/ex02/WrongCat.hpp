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
		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);
		void makeSound() const;
		std::string getType() const;
};
#endif