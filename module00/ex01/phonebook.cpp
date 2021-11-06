#include "phonebook.hpp"

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

void phonebook::search(void)
{
    phonebook::contact *c;
    unsigned size;
   // exit(4);
   
    c = &this->contacts[this->contacts_size - 1];
    std::cout << "|" << std::setw(10) << "index" << std::left << '|' << std::endl;
    if (this->contacts_size == 0)
        return ;
    std::cout << c->first_name << " " << c->last_name << " " << c->nickname << " " << c->phone_number << " " << c->darkest_secret << std::endl;
}

int main(void)
{
    std::string cmd;
    phonebook ph;
   // std::cout << ph.contacts[6].first_name << std::endl;
    while (1)
    {
        std::cin >> cmd;
        if (!std::string("EXIT").compare(cmd))
            exit(0);
        else if (!std::string("ADD").compare(cmd))
            ph.add();
       else if (!std::string("SEARCH").compare(cmd))
            ph.search();
    }
    return (0);
}