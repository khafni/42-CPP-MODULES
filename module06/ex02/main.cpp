#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

Base * generate(void)
{
	srand(time(NULL));
	int rand_value = rand() % 3;
	switch (rand_value)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;	
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;	
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;	
}

void identify(Base& p)
{

	// if (dynamic_cast<A &>(p))
	// 	std::cout << "A" << std::endl;	
	// else if (dynamic_cast<B&>(p))
	// 	std::cout << "B" << std::endl;	
	// else if (dynamic_cast<C&>(p))
	// 	std::cout << "C" << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		// B &b = dynamic_cast<B&>(p);
		// std::cout << "B" << std::endl;	
		// C &c = dynamic_cast<C&>(p);
		// std::cout << "C" << std::endl;	
	}
	catch (std::bad_cast)
	{
		try
		{
			// A &a = dynamic_cast<A&>(p);
			// std::cout << "A" << std::endl;
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)b;
			// C &c = dynamic_cast<C&>(p);
			// std::cout << "C" << std::endl;	
		}
		catch (std::bad_cast)
		{
			std::cout << "C" << std::endl;
		}
	}
}

int main()
{
	Base *bp = generate();
	//Base *bp2 = new C;
	// identify(generate());
	identify(*bp);
	//identify(*bp2);
	return (0);
}