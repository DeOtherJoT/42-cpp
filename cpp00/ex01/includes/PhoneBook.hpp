#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook {
public:
	int		total_contacts;
	Contact	contact_list[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	displayContacts(void) const;
	void	addContact(void);
};

#endif