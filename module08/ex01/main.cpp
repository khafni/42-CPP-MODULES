#include "span.hpp"
#include <exception>
#include <iterator>
#include <vector>



int main()
{
    std::vector<int> a1;
    std::vector<int> a2;
    a2.push_back(1);
    a2.push_back(2);
    a2.push_back(3);
    a2.push_back(4);
    a2.push_back(5);
    a2.push_back(6);
   // std::vector::iterator i;
    Span s(5);
    try
    {
        s.addNumbers(a2.begin(), a2.end());
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return (1);
    }
    // s.addNumber(5);
    // s.addNumber(3);
    // s.addNumber(17);
    // s.addNumber(9);
    // s.addNumber(11);
    // try
    // {
    //     s.addNumber(420);
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
    return (0);
}