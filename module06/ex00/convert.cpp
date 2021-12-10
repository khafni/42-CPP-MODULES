#include "literal_parser.hpp"  

void literal_parser::convert()
{
    if (this->type == CHAR_TYPE)
    {
        this->Ivalue = static_cast<int>(this->Cvalue);
        this->Fvalue = static_cast<float>(this->Cvalue);
        this->Dvalue = static_cast<double>(this->Cvalue);
    }
    else if (this->type == INT_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Ivalue);
        this->Fvalue = static_cast<float>(this->Ivalue);
        this->Dvalue = static_cast<double>(this->Ivalue);
    }
    else if (this->type == FLOAT_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Fvalue);
        this->Ivalue = static_cast<int>(this->Fvalue);
        this->Dvalue = static_cast<double>(this->Fvalue);
    }
    else if (this->type == DOUBLE_TYPE)
    {
        this->Cvalue = static_cast<char>(this->Dvalue);
        this->Fvalue = static_cast<float>(this->Dvalue);
        this->Ivalue = static_cast<int>(this->Dvalue);
    }
}