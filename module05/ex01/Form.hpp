#ifndef FORM_H
#define FORM_H
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
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		} gthe;

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		} gtle;
		public:
			Form();
			Form(const std::string name, int grade_to_get_signed, int grade_to_get_executed);
			Form(const Form &obj);
			Form &operator= (const Form &obj);
			const std::string getName() const;
			bool get_is_signed() const;
			int   GetGradeToGetSigned() const;
			int  GetGradeToGetExecuted() const;
			void beSigned(Bureaucrat &b);
			~Form();
};

std::ostream& operator<< (std::ostream& stream, const Form& F);
#endif