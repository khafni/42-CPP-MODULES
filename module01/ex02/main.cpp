#include <iostream>
#include <string>

int main(void)
{
    std::string s("HI THIS IS BRAIN");
    std::string &s_r = s;
    std::string *s_p = &s;

    std::cout << &s << std::endl;
    std::cout << &s_r << std::endl;
    std::cout << s_p << std::endl;
    std::cout << s_r << std::endl;
    std::cout << *s_p << std::endl;
    return (0);
}