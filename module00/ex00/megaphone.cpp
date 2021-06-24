#include <iostream>



int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string s(argv[i]);
		for (int j = 0; s[j]; j++)	
			std::cout << (char)toupper(s[j]);
	}
	std::cout << std::endl; 
	return (EXIT_SUCCESS);	
	return (0);
}