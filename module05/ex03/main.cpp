#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat b("le dude", 2);
    // PresidentialPardonForm Pf("dude");
    // RobotomyRequestForm RR("kik");
    // b.signForm(Pf);
    // b.executeForm(Pf);
    Intern i;
    Form *f = i.makeForm("shrubbery creation", "na3na3");
    //Form *f = i.makeForm("robotomy request", "na3na3");
    //Form *f = i.makeForm("presidential pardon", "na3na3");

    b.signForm(*f);
    b.executeForm(*f);
   // RR.action();
    //Pf.action();
    return (0);
}