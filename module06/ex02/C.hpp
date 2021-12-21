#ifndef C_H
#define C_H
#pragma once
# include "Base.hpp"	

class C  : public Base
{
	private:

	public:

		C();
		~C();
		C(const C& obj);
		C &operator=(const C& obj);

};
#endif