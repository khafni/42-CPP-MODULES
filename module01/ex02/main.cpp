#include <iostream>
#include <string>

int main(void)
{
    std::string s("HI THIS IS BRAIN");
    std::string *s_PTR = &s;
    std::string &s_REF = s;

    std::cout << &s << std::endl;
    std::cout << &s_REF << std::endl;
    std::cout << s_PTR << std::endl;
    std::cout << s_REF << std::endl;
    std::cout << *s_PTR << std::endl;
    return (0);
}