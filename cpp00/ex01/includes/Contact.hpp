#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include "main.hpp"

class Contact {
public:
	STRING	first_name;
	STRING	last_name;
	STRING	nickname;
	STRING	phone_number;
	STRING	darkest_secret;

	Contact();
	~Contact(void);

	void	setContact(STRING f_n, STRING l_n, STRING n_n, STRING p_n, STRING d_s);
	void	displayContact(int index) const;
};

#endif