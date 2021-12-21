#ifndef B_H
#define B_H
#pragma once
#include "Base.hpp"	
class B : public Base
{
	private:

	public:

		B();
		~B();
		B(const B& obj);
		B &operator=(const B& obj);

};
#endif