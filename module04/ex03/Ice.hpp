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
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif