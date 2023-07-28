#include "../includes/Contact.hpp"

Contact::Contact()
	: f_name(""), l_name(""), n_name(""), p_num(""), d_sec("") {
	std::cout << "Contact constructor called" << '\n';
}

Contact::~Contact() {
	std::cout << "Contact destructor called" << '\n';
}

void	Contact::setContact(STRING const &n_fn, STRING const &n_ln, STRING const &n_nn, STRING const &n_pn, STRING const &n_ds) {
	this->f_name = n_fn;
	this->l_name = n_ln;
	this->n_name = n_nn;
	this->p_num = n_pn;
	this->d_sec = n_ds;
}

STRING	Contact::getFirstName(int mode) const {
	if (mode == 0 || this->f_name.length() <= 10)
		return (this->f_name);
	else 
		return (this->f_name.substr(0, 9) + ".");
}

STRING	Contact::getLastName(int mode) const {
	if (mode == 0 || this->l_name.length() <= 10)
		return (this->l_name);
	else 
		return (this->l_name.substr(0, 9) + ".");
}

STRING	Contact::getNickName(int mode) const {
	if (mode == 0 || this->n_name.length() <= 10)
		return (this->n_name);
	else 
		return (this->n_name.substr(0, 9) + ".");
}

STRING	Contact::getPhoneNum(void) const {
	return (this->p_num);
}

STRING	Contact::getDarkestSecret(void) const {
	return (this->d_sec);
}

void	Contact::displayRow(int index) const {
	std::cout	<< std::setw(10) << index << "|"
				<< std::setw(10) << getFirstName(1) << '|'
				<< std::setw(10) << getLastName(1) << '|'
				<< std::setw(10) << getNickName(1) << '\n';
}

void	Contact::displayDetails(void) const {
	std::cout << "First Name     : " << getFirstName(0) << '\n';
	std::cout << "Last Name      : " << getLastName(0) << '\n';
	std::cout << "Nickname       : " << getNickName(0) << '\n';
	std::cout << "Phone Number   : " << getPhoneNum() << '\n';
	std::cout << "Darkest Secret : " << getDarkestSecret() << '\n';
}