#include "PresidentialPardonForm.hpp"  
#include <exception>
	
PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}
PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	this->target = "";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): Form(obj.target, 25, 5)
{
    this->target = obj.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator= (const PresidentialPardonForm &obj)
{
    this->target = obj.target;
    return (*this);
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