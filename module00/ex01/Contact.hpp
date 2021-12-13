#ifndef CONTACT_H
#define CONTACT_H
#pragma once
# include <iostream>
# include <string>
# include <iomanip>

class Contact  
{
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
	std::string str_truncate(std::string str);
	public:
		Contact();
		// Contact(std::string first_name="fewfew", std::string last_name="", std::string nickname="", int phone_number=0, std::string darkest_secret="");
        void contact_set(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret);	
		void contact_set_using_cin();
		void contact_display(void);
		void contact_formated_display(void);
};
#endif