#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#pragma once
# include <string>
# include <exception>

class Bureaucrat  
{
	
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
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat &obj);
		const std::string getName() const;
		int getGrade() const;
		void grade_increment();
		void grade_decrement();
		~Bureaucrat();
};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc);	
#endif