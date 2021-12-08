#ifndef LITERAL_PARSER_H
#define LITERAL_PARSER_H
#pragma once
#define CHAR_TYPE 1
#define INT_TYPE 2
#define FLOAT_TYPE 3
#define DOUBLE_TYPE 4
# include <string>
# include <iostream>
	
class literal_parser  
{
	private:
		
		char Cvalue;
		float Fvalue;
		double Dvalue;
		void get_type(std::string input);
		void convert(void);
	public:
		
		int Ivalue;
		char type;
		literal_parser(std::string input);
		void display();
		~literal_parser();
};
#endif