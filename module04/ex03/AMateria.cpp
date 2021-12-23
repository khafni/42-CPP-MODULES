#include "AMateria.hpp"  
	
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}
   
// void	AMateria::setType(std::string const &type)
// {
//     this->type = type;
// }

AMateria::~AMateria()
{
	
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}