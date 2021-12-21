#ifndef A_H
#define A_H
#pragma once
# include "Base.hpp"
	
class A: public Base
{
	private:

	public:

		A();
		A(const A& obj);
		A &operator=(const A& obj);
		~A();

};
#endif