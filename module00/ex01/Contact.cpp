#include "Contact.hpp"  
	

Contact::Contact()
{
	this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}

void Contact::contact_set(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret)	
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void Contact::contact_set_using_cin()
{
	std::cout << "insert first name: ";
    std::cin >> this->first_name;
    std::cout << std::endl;
    std::cout << "insert last name: ";
    std::cin >> this->last_name;
    std::cout << std::endl;
    std::cout << "insert nickname: ";
    std::cin >> this->nickname;
    std::cout << std::endl;
    std::cout << "insert phone number: ";
    std::cin >> this->phone_number;
    std::cout << std::endl;
    std::cout << "insert darkest secret: ";
    std::cin >> this->darkest_secret;
    std::cout << std::endl;
	std::cin.ignore(10000,'\n');
}

std::string Contact::str_truncate(std::string str)
{
    std::string r_s = str.substr(0, 10);
    if (str.length() > 10)
        r_s[9] = '.';
    return (r_s);
}
void Contact::contact_display(void)
{
	std::cout << "first name: " <<  this->first_name << std::endl;
	std::cout << "last name: " <<  this->last_name << std::endl;
	std::cout << "nickname: " <<  this->nickname << std::endl;
	std::cout << "phone number: " <<  this->phone_number << std::endl;
	std::cout << "darkest secret: " <<  this->darkest_secret << std::endl;
}
void Contact::contact_formated_display()
{
    std::cout << std::setw(10) <<  str_truncate(this->first_name) << "|";
	std::cout << std::setw(10) <<  str_truncate(this->last_name) << "|";
	std::cout << std::setw(10) <<  str_truncate(this->nickname) << "|";
	std::cout << std::setw(10) <<  str_truncate(this->phone_number) << "|";
	std::cout << std::setw(10) <<  str_truncate(this->darkest_secret) << "|" << std::endl;
}

