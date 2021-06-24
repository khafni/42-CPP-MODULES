#include "phonebook.h"

void phonebook::add_contact(void)
{
	if (this->number_of_contacts >= 8)
	{
		std::cout << "phonebook number of contacts reached its maximum capacity!" << std::endl;
		return ;
	}
	std::cout << "enter first_name : ";
	std::cin >> this->contacts_array[this->number_of_contacts].first_name;
	//std::getline(std::cin, this->contacts_array[this->number_of_contacts].first_name);
	std::cout << "enter last_name : ";
	std::cin >> this->contacts_array[this->number_of_contacts].last_name;
	std::cout << "enter nickname : ";
	std::cin >> this->contacts_array[this->number_of_contacts].nickname;
	std::cout << "enter login : ";
	std::cin >> this->contacts_array[this->number_of_contacts].login;
	std::cout << "enter postal address : ";
	std::cin >> this->contacts_array[this->number_of_contacts].postal_address;
	std::cout << "enter email address : ";
	std::cin >> this->contacts_array[this->number_of_contacts].email_address;	
	std::cout << "enter phone number : ";
	std::cin >> this->contacts_array[this->number_of_contacts].phone_number;	
	std::cin.clear();
	std::cout << "enter birthday date in the format month/day/year: ";
	std::cin >> this->contacts_array[this->number_of_contacts].birthday_date;
	std::cout << "enter favorite meal : ";
	std::cin >> this->contacts_array[this->number_of_contacts].favorite_meal;
	std::cout << "enter underwear color : ";
	std::cin >> this->contacts_array[this->number_of_contacts].underwear_color;
	std::cout << "enter darkest secret : ";
	std::cin >> this->contacts_array[this->number_of_contacts].darkest_secret;
	this->number_of_contacts++;
}


phonebook::phonebook()
{
	this->number_of_contacts = 0;
}