#ifndef CONTACT_HPP
# define CONTACT_HPP

#define STRING std::string

#include <iostream>

class Contact {
private:
	STRING	f_name;
	STRING	l_name;
	STRING	n_name;
	STRING	p_num;
	STRING	d_sec;

public:
	Contact();
	~Contact();

	void		setContact(STRING const &n_fn, STRING const &n_ln, STRING const &n_nn, STRING const &n_pn, STRING const &n_ds);

	STRING	getFirstName(int mode) const;
	STRING	getLastName(int mode) const;
	STRING	getNickName(int mode) const;
	STRING	getPhoneNum(void) const;
	STRING	getDarkestSecret(void) const;

	void		displayRow(void) const;
	void		displayDetails(void) const;
};

#endif