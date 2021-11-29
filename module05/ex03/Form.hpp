#ifndef FORM_H
#define FORM_H
#include <exception>
#include <ostream>
#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form  
{
	private:
		const std::string name;
		bool is_signed;
		const int grade_to_get_signed;
		const int grade_to_get_executed;
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		} gthe;

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		} gtle;
		
		class FormNotSignedException : public std::exception
		{
			virtual const char *what() const throw();
		} fnse;
		Form(const std::string name, int grade_to_get_signed, int grade_to_get_executed);
		const std::string getName() const;
		bool get_is_signed() const;
		const int GetGradeToGetSigned() const;
		const int GetGradeToGetExecuted() const;
		void beSigned(Bureaucrat &b);
		~Form();
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<< (std::ostream& stream, const Form& F);
#endif