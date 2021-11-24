#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#pragma once
#include <string>
#include <iostream>
	
class WrongAnimal  
{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	virtual void makeSound() const;
	virtual std::string getType() const;
};
#endif