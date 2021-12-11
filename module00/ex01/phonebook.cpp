#include "phonebook.hpp"
#include <iostream>
#include <string>

phonebook::phonebook()
{
    this->contacts_size = 0;
}

phonebook::contact::contact(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void phonebook::contact::contact_set(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void phonebook::add(void)
{
    phonebook::contact *c;


    this->contacts_size++;
    if (this->contacts_size > 8)
    {
        c = &this->contacts[7];
        this->contacts_size = 7;
    }
    else
        c = &this->contacts[this->contacts_size - 1];
    std::cout << "insert first name: ";
    std::cin >> c->first_name;
    std::cout << std::endl;
    std::cout << "insert last name: ";
    std::cin >> c->last_name;
    std::cout << std::endl;
    std::cout << "insert nickname: ";
    std::cin >> c->nickname;
    std::cout << std::endl;
    std::cout << "insert phone number: ";
    std::cin >> c->phone_number;
    std::cout << std::endl;
    std::cout << "insert darkest secret: ";
    std::cin >> c->darkest_secret;
    std::cout << std::endl;
}

std::string str_truncate(std::string str)
{
    std::string r_s = str.substr(0, 10);
    if (str.length() > 10)
        r_s[9] = '.';
    return (r_s);
}

void phonebook::search(void)
{
    phonebook::contact *c;
    unsigned index;
   
    c = &this->contacts[this->contacts_size - 1];
    std::cout << "|" << std::setw(10) << std::left << "index" << "|";
	std::cout << std::setw(10) <<  "first name" << "|";
	std::cout << std::setw(10) <<  "last name" << "|";
    std::cout << std::setw(10) <<  "nickname" << "|";
	std::cout << std::setw(10) <<  str_truncate("phone number") << "|";
	std::cout << std::setw(10) <<  str_truncate("darkest secret") << "|" << std::endl;
    if (this->contacts_size == 0)
        return ;
    for (unsigned i = 0; i < this->contacts_size; i++)
    {
        c = &this->contacts[i];
        std::cout << "|" << std::setw(10) << std::left << i << "|";
        std::cout << std::setw(10) <<  str_truncate(c->first_name) << "|";
	    std::cout << std::setw(10) <<  str_truncate(c->last_name) << "|";
	    std::cout << std::setw(10) <<  str_truncate(c->nickname) << "|";
	    std::cout << std::setw(10) <<  str_truncate(c->phone_number) << "|";
	    std::cout << std::setw(10) <<  str_truncate(c->darkest_secret) << "|" << std::endl;
    }
    std::cout << "enter the index of the desired entry: ";
    std::cin >> index;
    std::cout << "first name: " <<  c->first_name << std::endl;
	std::cout << "last name: " <<  c->last_name << std::endl;
	std::cout << "nickname: " <<  c->nickname << std::endl;
	std::cout << "phone number: " <<  c->phone_number << std::endl;
	std::cout << "darkest secret: " <<  c->darkest_secret << std::endl;
}

int main(void)
{
    std::string cmd;
    phonebook ph;
    while (1)
    {
        std::cout << "> enter command: ";
        std::cin >> cmd;
        if (!std::string("EXIT").compare(cmd))
            exit(0);
        else if (!std::string("ADD").compare(cmd))
            ph.add();
        else if (!std::string("SEARCH").compare(cmd))
            ph.search();
        std::cin.ignore(10000,'\n');
    }
    return (0);
}