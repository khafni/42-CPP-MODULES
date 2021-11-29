#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat b("le dude", 420);
    PresidentialPardonForm Pf("dude");
    RobotomyRequestForm RR("kik");
    b.signForm(Pf);
    b.executeForm(Pf);
   // RR.action();
    //Pf.action();
    return (0);
}