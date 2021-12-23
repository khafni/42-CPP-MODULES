#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat b("le dude", 3);
    //PresidentialPardonForm Pf("dude");
    RobotomyRequestForm RR("kik");
   // b.signForm(Pf);
    b.signForm(RR);
   b.executeForm(RR);
   // Pf.action();
    return (0);
}