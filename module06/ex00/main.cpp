#include <cctype>
#include <ios>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include "literal_parser.hpp"
#include <iomanip>
int str_error(std::string str, int ret)
{
    std::cout << str << std::endl;
    return (ret);
}



void char_parser(std::string input)
{
   
    std::cout << " || " << input << " || " << std::endl;
    char ret = 0;
    std::stringstream ss(input);
    ss >> ret;
    if (ss.fail())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(input[0] - '0'))
         std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << ret << std::endl;
    
    //char c = static_cast<char>(ret);
    //std::cout << std::hexfloat << ret << std::endl;
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
    
    literal_parser lp(argv[1]);
    lp.display();
    //int x = 123456789;
    // if ((std::numeric_limits<float>::max() < x))
    //     std::cout << "fuck" << std::endl;
    // else
    //     std::cout <<std::fixed << static_cast<float>(x) << std::endl;
    //std::cout << " $$$$ " << static_cast<bool>((std::numeric_limits<char>::max() < 434)) << std::endl;
    //std::cout << std::setprecision(1) << std::fixed << 4.22262626 << std::endl;
    //std::cout << 4.0 << std::endl;
    //std::cout << static_cast<int>(lp.type) << std::endl;
    //std::cout << lp.type << std::endl;
   // std::cout << atof(argv[1]) << std::endl;
    // float d = stof("inff");
   // float d;
   // std::stringstream ("nan") >> d;
    //std::cout << d << std::endl;
    return 0;
}