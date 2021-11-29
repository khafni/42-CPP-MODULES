#include "MateriaSource.hpp"  

MateriaSource::MateriaSource():len(1)
{
    for (int i = 0; i < 4; i++)
        this->m[i] = NULL; 
}

MateriaSource::~MateriaSource()
{

}

void MateriaSource::learnMateria(AMateria *am)
{
     if (this->len < 0 || this->len == 4
        || !am)
        return ;
    this->m[this->len - 1] = am->clone(); 
    this->len++;
}

AMateria*  MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->len; i++)
    {
        if (this->m[i]->getType() == type)
            return (this->m[i]->clone());
    }
    return (NULL);
}
