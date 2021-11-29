#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#pragma once
#include "Form.hpp"
	
class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:

		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		void action() const;
		void execute(Bureaucrat const & executor) const;
};
#endif