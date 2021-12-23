#ifndef ICE_H
#define ICE_H
#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"	
class Ice  : public AMateria 

{
	private:

	public:

		Ice();
		~Ice();
		Ice(const Ice &obj);
		Ice &operator= (const Ice &obj);
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif