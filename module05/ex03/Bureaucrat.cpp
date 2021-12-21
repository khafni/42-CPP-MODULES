#include "Bureaucrat.hpp"  
#include "Form.hpp"
#include <exception>
#include <iostream>
#include <string>
	
Bureaucrat::Bureaucrat(std::string name, int grade)
{
    this->name = name;
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
Bureaucrat::Bureaucrat()
{
    this->name = "";
    this->grade = 0;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    this->name = obj.name;
    this->grade = obj.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->name = obj.name;
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
        this->grade++;
        if (this->grade > 150)
        {
           this->grade--;
           throw this->gtle;
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
        this->grade--;
        if (this->grade < 1)
        {
           this->grade++;
           throw this->gthe;
        }
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<< (std::ostream& stream, const Bureaucrat& bc)
{
    stream << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return (stream);
}

void Bureaucrat::signForm(Form &f)
{
    try
    {
        if (this->getGrade() > f.GetGradeToGetSigned())
            throw (420);
        std::cout << this->getName() << " signs " << f.getName() << std::endl;
        f.beSigned(*this);
    }
    catch (int &err_num)
    {
        std::cout << this->getName() << " cannot sign " << f.getName() << " because " << "grade too low" <<std::endl;
        exit(1);
    }
}

void Bureaucrat::executeForm(Form const & form)
{ 
    form.execute(*this);
}