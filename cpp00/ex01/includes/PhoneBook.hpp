#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <Contact.hpp>

class PhoneBook {
private:
	int		total_contacts;
	Contact	contact_list[8];

public:
	PhoneBook();
	~PhoneBook();

	int		getTotalContacts(void) const;
	void	incTotalContacts(void);

	Contact	&getListElem(int index) const;
};

#endif