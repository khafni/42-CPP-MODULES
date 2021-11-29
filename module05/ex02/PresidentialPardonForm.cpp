#include "PresidentialPardonForm.hpp"  
#include <exception>
	
PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}
	
PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void PresidentialPardonForm::action() const
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->get_is_signed())
            throw Form::fnse;
        if (executor.getGrade() > this->GetGradeToGetExecuted())
            throw Form::gtle;
        this->action();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit (420);
    }
}