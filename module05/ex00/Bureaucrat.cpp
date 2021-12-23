#include "Bureaucrat.hpp"  
#include <iostream>
#include <string>

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}
	
Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    try
    {
        if (grade < 1)
            throw this->gthe;
        else if (grade > 150)
            throw this->gtle;
       
        this->grade = grade;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        exit(1);
    }

}
Bureaucrat::Bureaucrat():name("")
{
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name)
{
    this->grade = obj.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    return (*this);
}


Bureaucrat::~Bureaucrat()
{
	
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}


int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::grade_increment()
{
    try
    {
        this->grade--;
        if (this->grade < 1)
        {
           //this->grade--;
           throw this->gthe;
        }


    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        exit(1);
    }
}

void Bureaucrat::grade_decrement()
{
    try
    {
        this->grade++;
        if (this->grade < 1)
        {
           //this->grade++;
           throw this->gtle;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        exit(1);
    }
}

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc)
{
    stream << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return (stream);
}