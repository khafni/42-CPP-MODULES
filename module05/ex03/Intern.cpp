#include "Intern.hpp"  
	
Intern::Intern()
{
    this->forms_makers[0] = &Intern::makePresidentialPardonForm;
    this->forms_makers[1] = &Intern::makeRobotomyRequestForm;
    this->forms_makers[2] = &Intern::makeShrubberyCreationForm;
    this->forms_makers_names[0] = "president pardon";
    this->forms_makers_names[1] = "robotomy request";
    this->forms_makers_names[2] = "shrubbery creation";
}

Form *Intern::makePresidentialPardonForm( std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}


Form *Intern::makeForm(std::string form_name, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (form_name == this->forms_makers_names[i])
            return (this->*forms_makers[i](target));
    }
}


Intern::~Intern()
{
	
}