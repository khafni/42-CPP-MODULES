#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#pragma once
# include "Form.hpp"
	
class PresidentialPardonForm: public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		void action() const;
		void execute(Bureaucrat const & executor) const;
};
#endif