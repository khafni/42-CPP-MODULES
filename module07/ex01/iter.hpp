#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*f)(T &e))
{
    for (size_t i = 0; i < len; i++)
        (*f)(arr[i]);
}
#endif