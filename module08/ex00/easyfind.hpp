#ifndef EASYFIND_H
#define EASYFIND_H
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <vector>


// myException e_;
template <typename T> typename T::iterator easyfind(T ints_container, int n) {
  class myException : public std::exception {
    const char *what() const throw() { return "couldn't find the element"; }
  };
  typename T::iterator r = std::find(ints_container.begin(), ints_container.end(), n);
  if (r == ints_container.end()) {
    //  std::cout << "wow" << std::endl;
    throw(myException());
  }
  return (r);
}
#endif