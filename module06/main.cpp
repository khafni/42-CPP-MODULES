#include <ios>
#include <iostream>
#include <sstream>
#include <string>

int str_error(std::string str, int ret)
{
    std::cout << str << std::endl;
    return (ret);
}

void char_parser(std::string input)
{
    float ret = 0;
    std::stringstream ss(input);
    ss >> ret;
    /* if (ss.fail())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(input[0]))
         std::cout << "char: Non displayable" << std::endl; */
    
    char c = static_cast<char>(ret);
    std::cout << std::hexfloat << ret << std::endl;
}
/*
void int_parser(std::string input)
void float_parser(std::string input)
void double_parser(std::string input)
*/


int main(int argc, char *argv[])
{
    if (argc != 2)
        return str_error("wrong number of arguments", 1);
    
    char_parser(argv[1]);
    // float d = stof("inff");
    return 0;
}