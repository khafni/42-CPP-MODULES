#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#pragma once
# include <string>
# include <exception>

class Bureaucrat  
{
	public:
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		} gthe;

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		} gtle;

	private:
		std::string name;
		unsigned 	grade;
	public:
		Bureaucrat(const std::string name, int grade);
		const std::string getName() const;
		int getGrade() const;
		void grade_increment();
		void grade_decrement();
		~Bureaucrat();
};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc);	
#endif