#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
private:
	Contact	contact_list[8];

public:
	PhoneBook();
	~PhoneBook();

	Contact	&getListElem(int index);
};

#endif