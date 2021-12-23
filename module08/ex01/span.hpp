#ifndef SPAN_H
#define SPAN_H
#include <iterator>
#pragma once
# include <vector>
# include <exception>
# include <iostream>
# include <algorithm>


class addingNumberException: public std::exception
{
	const char * what() const throw();	
};

class Span  
{
	private:
		unsigned N;
		std::vector<int> numbers;
	public:
		Span(int N);
		~Span();

		void addNumber(int num);
		void addRandomNNumber();
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
};
#endif