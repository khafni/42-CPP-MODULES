#include <iostream>
#include <iterator>
#include <vector>
#include "easyfind.hpp"
int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    easyfind(v, 3);
    if (easyfind(v, 1) != v.end())
        std::cout << "number found" << std::endl;
    else
     std::cout << "number found" << std::endl;
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
        std::cout << *i << std::endl;
    return (0);
}