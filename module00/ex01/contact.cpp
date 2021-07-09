#include "contact.h"

contact::contact()
{
	return ;
}

void contact::print_contact(void)
{	
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout <<  "login: " << this->login << std::endl;
	std::cout << "postal address: " << this->postal_address << std::endl;
	std::cout << "email address: " << this->email_address << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "birthday date: " << this->birthday_date << std::endl;
	std::cout << "favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "underwear color: " << this->underwear_color << std::endl;		
	std::cout << "darkest secret: " << this->darkest_secret <<  std::endl;
}