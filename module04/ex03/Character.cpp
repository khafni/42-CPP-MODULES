#include "Character.hpp"  
	
Character::Character(std::string name):len(1)
{
    for (int i = 0; i < 4; i++)
        this->materias[i] = NULL;
    this->name = name;
}
	
Character::~Character()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     if (this->materias[i])
    //         delete this->materias[i];
    // } 
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (this->len < 0 || this->len == 4
        || !m)
        return ;
    this->materias[this->len - 1] = m;
    this->len++;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || !this->materias[idx])
        return ;
    this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
     if (idx < 0 || idx > 3 || !this->materias[idx])
        return ;
    this->materias[idx]->use(target);
}