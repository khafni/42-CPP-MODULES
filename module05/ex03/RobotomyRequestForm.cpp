#include "RobotomyRequestForm.hpp"  
#include <cstdlib>
	
RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 145, 137)
{
    this->target = target;
}
	
RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void RobotomyRequestForm::action() const
{
    std::srand(time(NULL));
    std::cout << "rizzzzzzzzzzzzzz" << std::endl;
    int random_num = rand() % 2;
    if (!random_num)
        std::cout << this->target << "as been robotomized successfully" << std::endl;
    else
        std::cout << "it’s a failure" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!this->get_is_signed())
            throw Form::fnse;
        if (executor.getGrade() > this->GetGradeToGetExecuted())
            throw Form::gtle;
        this->action();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        exit (420);
    }
}