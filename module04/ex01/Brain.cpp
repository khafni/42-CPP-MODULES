#include "Brain.hpp"  
#include <string>
	
Brain::Brain()
{
    for (std::string s : this->ideas) 
        s = "default string"; 
}
	
Brain::~Brain()
{
	
}