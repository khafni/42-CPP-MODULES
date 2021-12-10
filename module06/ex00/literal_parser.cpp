#include "literal_parser.hpp"

literal_parser::literal_parser(std::string input): type(0), Fvalue(0), Ivalue(0), Dvalue(0), Cvalue(0), is_pseudo_literal(0)
{
    get_type(input);
    convert();
    overflows = 0;
}



literal_parser::~literal_parser()
{
	
}