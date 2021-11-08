#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include <iomanip>

class phonebook 
{
    class contact
    {
        public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
            contact(std::string first_name="fewfew", std::string last_name="", std::string nickname="", int phone_number=0, std::string darkest_secret="");
            void contact_set(std::string first_name, std::string last_name, std::string nickname, int phone_number, std::string darkest_secret);

    };
    public:
        unsigned contacts_size;
        contact contacts[8];
        phonebook();
        void add (void);
        void search(void);
        void loop(void);
};



#endif