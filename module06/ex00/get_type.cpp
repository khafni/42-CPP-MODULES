#include "literal_parser.hpp"  
#include <_ctype.h>
#include <cctype>
#include <sstream>
#include <string>
#include <iomanip>

bool is_number(std::string str)
{
    int pls = 0;
    int mns = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9') && str[0] != '+'
        && str[0] != '-')
            return (false);
    }
    return (true);
}

bool check_if_float(std::string input)
{
    // stringstreams to float conversion doesn't work
    // when the string ends with an 'f' so we have
    // to hard code it
    if (input[input.size() - 1] == 'f')
        input = input.substr(0, input.size()-1);
    else
        return (false);
    float tmp;
    std::stringstream tmp_ss(input);
    tmp_ss >> tmp;
    //std::cout << tmp << std::endl;
    if (tmp_ss.fail())
    {
        //std::cout << " il y a haja" << std::endl;
        return (false);
    }
    if (input.find('.') == std::string::npos)
        return (false);
    return true;
}
bool check_if_double(std::string input)
{
    double tmp;
    std::stringstream tmp_ss(input);
    tmp_ss >> tmp;
    //std::cout << tmp << std::endl;
    if (tmp_ss.fail())
    {
        //std::cout << " il y a haja" << std::endl;
        return (false);
    }
    if (input.find('.') == std::string::npos)
        return (false);
    return true;
}

bool check_if_int(std::string input)
{ 
    int tmp = 0.0f;
    std::stringstream tmp_ss(input);
    tmp_ss >> tmp;
    //std::cout << tmp << std::endl;
    if (tmp_ss.fail() || !is_number(input))
    {
       //std::cout << " il y a haja int" << std::endl;
        return (false);
    } 
    return true;
}

void literal_parser::get_type(std::string input)
{
    std::stringstream ss(input);
    if (input.length() == 1 && std::isprint(input[0] - '0'))
    {
        this->type = CHAR_TYPE;
        ss >> this->Cvalue;
    }
    else if (check_if_int(input))
    {
        this->type = INT_TYPE;
        ss >> this->Ivalue;
    }
    else if (check_if_float(input))
    {
        this->type = FLOAT_TYPE;
        input = input.substr(0, input.size()-1);
        std::stringstream(input) >> this->Fvalue;
        //std::cout << "fFFFjyj: " <<  this->Fvalue << std::endl;
    }
    else if (check_if_double(input))
    {
        this->type = DOUBLE_TYPE;
        ss >> this->Dvalue;
    }
    else
    {
        if (input == "-inff" || input == "+inff" || input == "nanf")
        {
            input = input.substr(0, input.size() - 1);
            std::stringstream z(input);
            this->type = FLOAT_TYPE;
            z >> this->Fvalue;
           // std::cout << "D: " << this->Fvalue << std::endl;
            is_pseudo_literal = 1;
        }
        else if (input == "-inf" || input == "+inf" || input == "nan")
        {
            this->type = DOUBLE_TYPE;
            ss >> this->Dvalue; 
            is_pseudo_literal = 1;
        }
        else {
        this->type = 0;
        }
    }
}

