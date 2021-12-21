#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#pragma once
# include <string>
# include <exception>
# include "Form.hpp"
	
class Form;

class Bureaucrat  
{
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "grade is too high";
			}
		} gthe;

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "grade is too low";
			}
		} gtle;

	private:
		std::string name;
		unsigned 	grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		const std::string getName() const;
		int getGrade() const;
		void grade_increment();
		void grade_decrement();
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat &obj);
		~Bureaucrat();
		void signForm(Form &f);
};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc);	
#endif