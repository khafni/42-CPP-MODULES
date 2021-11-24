#include "Brain.hpp"  
#include <string>
	
Brain::Brain()
{ 
    for (int i = 0; i < 100; i++) 
        this->ideas[i] = "default string"; 
}
	
Brain::~Brain()
{

}