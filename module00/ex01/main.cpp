#include "phonebook.h"

int main()
{
	std::string prompt;
	phonebook phbook;	
 	while (1)
	{
		std::cout << "enter command: ";
		std::getline(std::cin, prompt);	
		if (!prompt.compare("EXIT"))
			return (0);
		else if (!prompt.compare("ADD"))
			phbook.add_contact();
	else if (!prompt.compare("SEARCH"))
			phbook.search();
	}	
	return (0);
}