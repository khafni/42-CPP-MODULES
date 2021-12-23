#ifndef AMATERIA_HPP
#define AMATERIA_HPP
//#pragma once

#include <iostream>
# include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:		
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		// void	setType(std::string const &type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);	
};
#endif