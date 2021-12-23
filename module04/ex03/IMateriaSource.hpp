#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H
#pragma once
# include "AMateria.hpp"
	
class IMateriaSource  
{
	public:
		public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif