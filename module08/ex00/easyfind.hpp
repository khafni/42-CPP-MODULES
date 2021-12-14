#ifndef EASYFIND_H
# define EASYFIND_H
# include <algorithm>
template<typename T>
typename T::iterator easyfind(T ints_container, int n)
{
    return (std::find(ints_container.begin(), ints_container.end(), n));
}
#endif