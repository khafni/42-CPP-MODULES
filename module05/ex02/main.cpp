#include "Bureaucrat.hpp"
#include <iostream>


int main()
{
    Bureaucrat b("wagecuck", 51);
    //std::cout << b;
    Form F("aform", 50, 30);
    std::cout << F;
    F.beSigned(b);
    b.signForm(F);
    std::cout << F;
    return (0);
}