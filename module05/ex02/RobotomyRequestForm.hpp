#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#pragma once
# include "Form.hpp"
#include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm &operator= (const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		void action() const;
		void execute(Bureaucrat const & executor) const;	
};
#endif