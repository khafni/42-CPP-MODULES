#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

template<typename T>
T min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
T max(T &a, T &b)
{
    if (a <= b)
        return (b);
    return (a);
}

#endif