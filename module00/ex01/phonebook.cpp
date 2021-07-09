#include "phonebook.h"
#include <iomanip>

void phonebook::add_contact(void)
{
	if (this->number_of_contacts >= 8)
	{
		std::cout << "phonebook number of contacts reached its maximum capacity!" << std::endl;
		return;
	}
	std::cout << "enter first_name : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].first_name);
	//std::cin >> this->contacts_array[this->number_of_contacts].first_name;
	//std::getline(std::cin, this->contacts_array[this->number_of_contacts].first_name);
	std::cout << "enter last_name : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].last_name);
	//std::cin >> this->contacts_array[this->number_of_contacts].last_name;
	std::cout << "enter nickname : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].nickname);
	//std::cin >> this->contacts_array[this->number_of_contacts].nickname;
	std::cout << "enter login : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].login);
	//std::cin >> this->contacts_array[this->number_of_contacts].login;
	std::cout << "enter postal address : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].postal_address);
	// std::cin >> this->contacts_array[this->number_of_contacts].postal_address;
	std::cout << "enter email address : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].email_address);
	std::cout << "enter phone number : ";
	std::cin >> this->contacts_array[this->number_of_contacts].phone_number;
	while (std::cin.fail())
	{
		std::cout << "Please enter an integer";
		std::cin.clear();
		std::cout << std::endl;
		std::cin >> this->contacts_array[this->number_of_contacts].phone_number;
	}
	std::cout << "enter birthday date in the format month/day/year: ";
	std::cin.ignore();
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].birthday_date);
	std::cout << "enter favorite meal : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].favorite_meal);

	std::cout << "enter underwear color : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].underwear_color);

	std::cout << "enter darkest secret : ";
	std::getline(std::cin, this->contacts_array[this->number_of_contacts].darkest_secret);
	this->number_of_contacts++;
}

std::string str_trunc(std::string str)
{
	std::string tmp_str;

	if (str.length() > 10)
	{
		tmp_str = str.substr(0, 9);
		tmp_str.append(".");
		return (tmp_str);
	}
	return str;
}
contact *phonebook::get_contact(int contact_index)
{
	if (contact_index > this->number_of_contacts || contact_index < 0)
		return (nullptr);
	return &(this->contacts_array[contact_index]);
}

void phonebook::search(void)
{
	int i;
	contact c;
	std::string tmp_str;
	contact *r_c;

	i = 0;
	std::cout << '|' << std::setw(10) << std::left << "index" << "|";
	std::cout << std::setw(10) << str_trunc("first name") << "|";
	std::cout << std::setw(10) << str_trunc("last name") << "|";
	std::cout << std::setw(10) << str_trunc("nickname") << "|" << std::endl;
	while (i < this->number_of_contacts)
	{
		c = this->contacts_array[i];

		std::cout << '|' << std::setw(10) << std::left << i << "|";
		std::cout << std::setw(10) << str_trunc(c.first_name) << "|";
		std::cout << std::setw(10) << str_trunc(c.last_name) << "|";
		std::cout << std::setw(10) << str_trunc(c.nickname) << "|" << std::endl;
		i++;
	}
	std::cout << "enter the index of the desired entry: ";
	std::cin >> i;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	r_c = this->get_contact(i);
	if (!r_c)
	{
		std::cerr << "wrong index" << std::endl;
		exit(1);
	}
	r_c->print_contact();
}

phonebook::phonebook()
{
	this->number_of_contacts = 0;
}