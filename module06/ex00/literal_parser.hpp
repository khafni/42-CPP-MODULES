#ifndef LITERAL_PARSER_H
#define LITERAL_PARSER_H
#pragma once
#define CHAR_TYPE 1
#define INT_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4
# include <string>
# include <iostream>
# include <limits>
# include <math.h>
	
class literal_parser  
{
	private:
		char Cvalue;
		int Ivalue;
		float Fvalue;
		double Dvalue;
		int is_pseudo_literal;
		int overflows;
		void get_type(std::string input);
		void convert(void);
		void display_char();
		void display_int();
		void display_float();
		void display_double();
		char type;
	public:	
		literal_parser(std::string input);
		literal_parser(const literal_parser & obj);
		literal_parser &operator= (const literal_parser & obj);
		literal_parser();
		void display();
		~literal_parser();
};
#endif