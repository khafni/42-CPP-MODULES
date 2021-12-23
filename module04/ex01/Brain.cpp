#include "Brain.hpp"  
#include <string>
	
Brain::Brain()
{ 
    for (int i = 0; i < 100; i++) 
        this->ideas[i] = "default string"; 
}
Brain::Brain(const Brain& obj)
{
    for (int i = 0; i < 100; i++) 
        this->ideas[i] = obj.ideas[i]; 
}
Brain &Brain::operator= (const Brain& obj)
{
     for (int i = 0; i < 100; i++) 
        this->ideas[i] = obj.ideas[i];
    return (*this);
}

void Brain::set_brain_idea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::get_brain_idea(int index) const
{
    return (this->ideas[index]);
}

Brain::~Brain()
{

}