#include "literal_parser.hpp"
#include <functional>
#include <string>

//literal_parser::literal_parser(std::string input): Fvalue(0), Ivalue(0), Dvalue(0), Cvalue(0),  is_pseudo_literal(0), type(0)
literal_parser::literal_parser(std::string input):  Cvalue(0), Ivalue(0), Fvalue(0), Dvalue(0), is_pseudo_literal(0), overflows(0), type(0)

{
    get_type(input);
    convert();
    overflows = 0;
}


literal_parser::literal_parser():  Cvalue(0), Ivalue(0), Fvalue(0), Dvalue(0), is_pseudo_literal(0), overflows(0), type(0)
{

}

literal_parser::literal_parser(const literal_parser &obj): Cvalue(obj.Cvalue), Ivalue(obj.Ivalue), Fvalue(obj.Fvalue), Dvalue(obj.Dvalue), is_pseudo_literal(obj.is_pseudo_literal), overflows(obj.overflows), type(obj.type)
{
    get_type("input");
    convert();
    overflows = 0;
}

literal_parser &literal_parser::operator= (const literal_parser &obj)
{
    (void)obj;
    return (*this);
}


literal_parser::~literal_parser()
{
	
}