#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
#pragma once
#include "IMateriaSource.hpp"
	
class MateriaSource: public IMateriaSource
{
	private:
		AMateria *m[4];
		int len;
	public:
		MateriaSource();
		~MateriaSource(); 
		void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};
#endif