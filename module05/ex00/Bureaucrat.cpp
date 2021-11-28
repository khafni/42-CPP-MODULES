#include "Bureaucrat.hpp"  
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
    }

}
	
Bureaucrat::~Bureaucrat()
{
	
}

const std::string Bureaucrat::getName()
{
    return (this->name);
}


int Bureaucrat::getGrade()
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
    stream << bc.getName();
    return (stream);
}