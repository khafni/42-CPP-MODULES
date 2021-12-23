#include <exception>
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
    try
    {
        easyfind(v, 31);
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;
        exit(1);
    }
    // std::vector<int>::iterator i = std::find(v.begin(), v.end(), 30);
    // if (i != v.end())
    //     std::cout << "number found" << std::endl;
    // if (easyfind(v, 1) != v.end())
    //     std::cout << "number found" << std::endl;
    // else
    //  std::cout << "number found" << std::endl;
    // for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
    //     std::cout << *i << std::endl;
    return (0);
}