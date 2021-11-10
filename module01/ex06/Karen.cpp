#include "Karen.hpp"
#include <iostream>
#include <string>


void Karen::debug(void)
{
    std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money";
    std::cout << ". You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]\n" <<  "I think I deserve to have some extra bacon for free. I’ve been";
    std::cout << "coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]\n" << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen()
{
    this->fun_names[0] = std::string("DEBUG");
    this->fun_names[1] = std::string("INFO");
    this->fun_names[2] = std::string("WARNING");
    this->fun_names[3] = std::string("ERRROR");
    this->func_ptrs[0] = &Karen::debug;
    this->func_ptrs[1] = &Karen::info;
    this->func_ptrs[2] = &Karen::warning;
    this->func_ptrs[3] = &Karen::error;
}


void Karen::complain(std::string level)
{
    int index = -1;
    for (int i = 0; i < 4; i++) 
    {
        if (level == this->fun_names[i])
            index = i; 
    } 
    if (index != -1)
    {
        for (int i = index; i < 4; i++) 
        {
            (this->*func_ptrs[i])();
        } 
    }
    else
    {
        std::cout << "[ Probably complaining about insignificant problem ]";
        return ;
    }
}