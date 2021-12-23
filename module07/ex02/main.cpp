#include <iostream>
#include "Array.hpp"
#include <string>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> empty_array(0);
    empty_array[0];
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << numbers[i];
        std::cout << "     " << mirror[i] << std::endl;
    }
    Array<std::string> strarr(3);
    strarr[0] = "one";
    strarr[1] = "two";
    strarr[2] = "three";
    for (int i = 0; i < 3; i++)
        std::cout << strarr[i] << std::endl;
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     if (mirror[i] != numbers[i])
    //     {
    //         std::cerr << "didn't save the same value!!" << std::endl;
    //         return 1;
    //     }
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    // delete [] mirror;//
    return 0;
}
