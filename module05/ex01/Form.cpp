#include "Form.hpp"  
#include <exception>

const char *Form::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

Form::Form(const std::string name, int grade_to_get_signed, int grade_to_get_executed): name(name), grade_to_get_executed(grade_to_get_executed), grade_to_get_signed(grade_to_get_signed)
{
    this->is_signed = false;
    try
    {
        if (grade_to_get_signed < 1)
            throw this->gthe;
        else if (grade_to_get_signed > 150)
            throw this->gtle;
        if (grade_to_get_executed < 1)
            throw this->gthe;
        else if (grade_to_get_executed > 150)
            throw this->gtle;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit(1);
    }
}
	
Form::~Form()
{
	
}

const std::string Form::getName() const
{
    return (this->name);
}
bool Form::get_is_signed() const
{
    return (this->is_signed);
}

const int Form::GetGradeToGetSigned() const
{
    return (grade_to_get_signed);
}
const int Form::GetGradeToGetExecuted() const
{
    return (grade_to_get_executed);
}

void    Form::beSigned(Bureaucrat &b)
{
    try
    {
        if (b.getGrade() > this->GetGradeToGetSigned())
            throw this->gtle;
        this->is_signed = true;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit(1);
    }
}

std::ostream& operator<< (std::ostream& stream, const Form& F)
{
    if (F.get_is_signed())
        stream << F.getName() << " is signed" << std::endl;
    else
        stream << F.getName() << " is not signed" << std::endl;
    return (stream);
}