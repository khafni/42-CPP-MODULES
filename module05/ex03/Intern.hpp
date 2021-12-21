#ifndef INTERN_H
#define INTERN_H
#pragma once
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"	
class Intern  
{
	private:
		Form *(Intern::*forms_makers[3])(std::string target);
		std::string	forms_makers_names[3];
		Form *makePresidentialPardonForm(std::string target);
		Form *makeRobotomyRequestForm(std::string target);
		Form *makeShrubberyCreationForm(std::string target);
	public:
		Intern();
		Intern(const Intern &obj);
		Intern &operator= (const Intern &obj);
		~Intern();
		Form *makeForm(std::string form_name, std::string target);
};
#endif