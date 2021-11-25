#ifndef CHARACTER_H
#define CHARACTER_H
#pragma once
#include "AMateria.hpp"
# include "ICharacter.hpp"	

class Character : public ICharacter 
{
	private:
		AMateria *materias[4];
		int len;
		std::string name;
	public:
		Character(std::string name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif