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
        ss >> this->Fvalue;
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
            this->type = FLOAT_TYPE;
            ss >> this->Fvalue;
        }
        else if (input == "-inf" || input == "+inf" || input == "nan")
        {
            this->type = DOUBLE_TYPE;
            ss >> this->Dvalue; 
        }
        else {
        this->type = 0;
        std::cout << "ok lol nothing works repeat" << std::endl;
        }
    }
}

void literal_parser::convert()
{
    if (this->type == CHAR_TYPE)
    {
        this->Ivalue = static_cast<int>(this->Cvalue);
        this->Fvalue = static_cast<float>(this->Cvalue);
        this->Dvalue = static_cast<double>(this->Cvalue);
    }
    else if (this->type == INT_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Ivalue);
        this->Fvalue = static_cast<float>(this->Ivalue);
        this->Dvalue = static_cast<double>(this->Ivalue);
    }
    else if (this->type == FLOAT_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Fvalue);
        this->Ivalue = static_cast<int>(this->Fvalue);
        this->Dvalue = static_cast<double>(this->Fvalue);
    }
    else if (this->type == DOUBLE_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Dvalue);
        this->Fvalue = static_cast<float>(this->Dvalue);
        this->Ivalue = static_cast<int>(this->Dvalue);
    }
}

literal_parser::literal_parser(std::string input): type(0), Fvalue(0), Ivalue(0), Dvalue(0), Cvalue(0)
{
    get_type(input);
    convert();
}

void literal_parser::display()
{
    if (std::isprint(this->Cvalue))
        std::cout << "char: " << this->Cvalue << std::endl;
    else
        std::cout << "char: " << this->Cvalue << std::endl;
    std::cout << "int: " << this->Ivalue << std::endl;
    std::cout << "float: "  << this->Fvalue << "f" << std::endl;
    std::cout << "double: " << this->Dvalue << std::endl;
}

literal_parser::~literal_parser()
{
	
}