#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <deque>
#pragma once
# include <stack>
# include <list>

template<typename T, typename Container = std::deque<T> >	
class MutantStack: public std::stack<T, Container>
{
	private:

	public:
		typedef typename Container::iterator iterator;
		typename Container::iterator begin() { return this->c.begin();};
		typename Container::iterator end() { return this->c.end();};


};
#endif