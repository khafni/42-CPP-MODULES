#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
class Phonebook 
{ 
    unsigned contacts_size;
    Contact contacts[8];
    bool is_number(std::string str);
    public:
        Phonebook();
        void add (void);
        void search(void);
        void loop(void);
};



#endif