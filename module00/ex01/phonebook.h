#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.h"
class phonebook
{
	public:
		contact contacts_array[8];
		int number_of_contacts;
		phonebook();
		void add_contact(void);
		void search(void);

};

#endif