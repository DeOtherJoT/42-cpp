#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
	std::string	f_name;
	std::string	l_name;
	std::string	n_name;
	std::string	p_num;
	std::string	d_sec;

public:
	Contact();
	~Contact();

	void		setContact(std::string n_fn, std::string n_ln, std::string n_nn, std::string n_pn, std::string n_ds);

	std::string	getFirstName(int mode) const;
	std::string	getLastName(int mode) const;
	std::string	getNickName(int mode) const;
	std::string	getPhoneNum(int mode) const;
	std::string	getDarkestSecret(int mode) const;

	void		displayRow(void) const;
	void		displayDetails(void) const;
};

#endif