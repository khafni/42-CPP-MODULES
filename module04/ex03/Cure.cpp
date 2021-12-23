#include "Cure.hpp"  
#include "ICharacter.hpp"
	
Cure::Cure(): AMateria("cure")
{
	
}
	
Cure::~Cure()
{
	
}
// Cure::Cure(const Cure &obj): AMateria("cure")
// {

// }

// Cure &Cure::operator= (const Cure &obj)
// {
//     AMateria::type = "cure";
//     return (*this);
// }
AMateria* Cure::clone() const
{
    return (new Cure); 
}

void Cure::use(ICharacter& target)	
{
    std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}