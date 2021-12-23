#ifndef BRAIN_H
#define BRAIN_H
#pragma once
# include <string>	
class Brain  
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& obj);
		Brain &operator= (const Brain& obj);
		void set_brain_idea(int index, std::string idea);
		std::string get_brain_idea(int index) const;
		~Brain();
};
#endif




