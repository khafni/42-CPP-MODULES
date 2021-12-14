#include "iter.hpp"

void fun(int &num)
{
    num = 69;
}

void fun2(std::string &num)
{
    num += '@';
}

int main(int argc, char **argv)
{
    //first test
    int arr[3] = {1, 1, 1};
    iter(arr, 3, fun);
    for (int i = 0; i < 3; i++)
        std::cout << arr[i] << std::endl;
    //second test
    std::string arr2[3] = {"string1", "string2", "string3"};
    iter(arr2, 3, fun2);
    for (int i = 0; i < 3; i++)
        std::cout << arr2[i] << std::endl;
    return (0);
}