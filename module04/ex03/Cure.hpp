#ifndef CURE_H
#define CURE_H
#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"	

class Cure: public AMateria
{
	private:

	public:

		Cure();
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif