#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <streambuf>
#include <string>

std::string replace_str(std::string filebuffer, std::string s1, std::string s2)
{
	std::string r_str = filebuffer;
	std::string tmp;
	while (r_str.find(s1) != std::string::npos)
	{
		tmp = r_str.substr(0, r_str.find(s1));
		tmp += s2;
		for (int i = r_str.find(s1) + s1.length(); i < r_str.length(); i++)	
			tmp += r_str[i];
		r_str = tmp;
	}
	return (tmp);
}

void replace(std::string filename, std::string s1, std::string s2)
{
    std::fstream        F;	
	std::fstream		Freplace;
    std::stringstream	ss;
	std::string			s;

	if (s1 == s2)
	{
		std::cerr << "can't replace a string with itself" << std::endl;
		return ;
	}
	if (s1 == s2)
		
    F.open(filename, std::fstream::in | std::fstream::out);
    if (F)
    {
		ss << F.rdbuf();
		s = ss.str();
		s = replace_str(s, s1, s2);
		Freplace.open(filename+".replace", std::fstream::out);
		Freplace << s;
    }
    else
    {
        std::cerr << "file won't open";
        return ;
    }
    F.close();
}

int main(int argc, char **argv)
{
   replace("sample.txt", "jojo", "jojo");
    return (0);
}