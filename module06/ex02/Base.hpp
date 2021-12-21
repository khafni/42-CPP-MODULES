#ifndef BASE_H
#define BASE_H
#pragma once
	
class Base 
{
	private:
	
	public:
		Base();
		Base &operator=(const Base& obj);
		Base(const Base& obj);
		virtual ~Base();

};
#endif