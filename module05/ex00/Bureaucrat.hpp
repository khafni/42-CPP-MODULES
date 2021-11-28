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
		Bureaucrat(const std::string name, int grade);
		std::string getName();
		int getGrade();
		void grade_increment();
		void grade_decrement();
		~Bureaucrat();
};
std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc);	
#endif