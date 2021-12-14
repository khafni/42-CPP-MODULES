#include "span.hpp"
#include <exception>


int main()
{
    Span s(5);
    s.addNumber(5);
    s.addNumber(3);
    s.addNumber(17);
    s.addNumber(9);
    s.addNumber(11);
    try
    {
        s.addNumber(420);
    }
    catch (std::exception &e)
    {
        std::cout << "no wtf" << std::endl;
    }
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
    return (0);
}