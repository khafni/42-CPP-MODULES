#include "phonebook.hpp"
#include <iostream>
#include <sstream>
#include <string>

Phonebook::Phonebook()
{
    this->contacts_size = 0;
}

void Phonebook::add(void)
{
    Contact *c;

    this->contacts_size++;
    if (this->contacts_size > 8)
    {
        c = &this->contacts[0];
        this->contacts_size = 7;
    }
    else
        c = &this->contacts[this->contacts_size - 1];
    c->contact_set_using_cin();
}

bool Phonebook::is_number(std::string str)
{
    for (int i = 0; i < (int)str.length(); i++)
    {
        if ((str[i] < '0' || str[i] > '9'))
            return (false);
    }
    return (true);
}
std::string str_truncate(std::string str)
{
    std::string r_s = str.substr(0, 10);
    if (str.length() > 10)
        r_s[9] = '.';
    return (r_s);
}

void Phonebook::search(void)
{
    Contact *c;
    std::string index_;
   
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
        c->contact_formated_display(); 
    }
    std::cout << "enter the index of the desired entry: ";
    std::getline(std::cin, index_);
    //std::cin >> index_;
    int index = -1;
    std::stringstream(index_) >> index;
    if (std::cin.fail() || !is_number(index_))
    {
        std::cout << "Please enter an integer" << std::endl;
        std::cin.clear();
        return ;
    }
    if (index > static_cast<int>(this->contacts_size - 1) || index < 0)
    {
        std::cout << "wrong index" << std::endl;
        std::cin.clear();
        return ;
    }
    c->contact_display();
}

int main(void)
{
    std::string cmd;
    Phonebook ph;
    while (1)
    {
        std::cout << "> enter command: ";
        std::getline(std::cin, cmd);
        if (!std::string("EXIT").compare(cmd))
            exit(0);
        else if (!std::string("ADD").compare(cmd))
            ph.add();
        else if (!std::string("SEARCH").compare(cmd))
            ph.search();
      // std::cin.ignore(10000,'\n');
    }
    return (0);
}