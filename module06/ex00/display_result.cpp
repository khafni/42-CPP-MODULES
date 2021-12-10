#include "literal_parser.hpp"

void literal_parser::display_char()
{
    if (std::isprint(this->Cvalue))
        std::cout << "char: " << this->Cvalue << std::endl;
    else if (is_pseudo_literal || !type)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void literal_parser::display_int()
{
    if (is_pseudo_literal || !type)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << this->Ivalue << std::endl;
}

void literal_parser::display_float()
{
    if (!type)
       std::cout << "float: impossible" << std::endl; 
    else
    {
        std::cout << "float: " << this->Fvalue;
        if (!(this->Fvalue - static_cast<int>(this->Fvalue)))
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
}

void literal_parser::display_double()
{
    if (!type)
       std::cout << "double: impossible" << std::endl; 
    else
    {
        std::cout << "double: " << this->Fvalue;
        if (!fmod(this->Dvalue, 1))
            std::cout << ".0";
    }
}

void literal_parser::display()
{ 
    display_char();
    display_int();
    display_float();
    display_double();
    //std::cout << "int: " << this->Ivalue << std::endl;
    //std::cout << "float: "  << this->Fvalue << "f" << std::endl;
    //std::cout << "double: " << this->Dvalue << std::endl;
}