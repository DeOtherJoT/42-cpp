#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "main.hpp"

class PhoneBook {
public:
	int		total_contacts;
	Contact	contact_list[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	displayContacts(void) const;
	void	displayEntry(int index) const;
	void	addContact(void);
};

#endif