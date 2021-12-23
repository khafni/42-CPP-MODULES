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
		Cure(const Cure &obj);
		Cure &operator= (const Cure &obj);
		AMateria* clone() const;
		void use(ICharacter& target);
};
#endif