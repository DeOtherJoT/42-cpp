#include "../includes/Contact.hpp"

Contact::Contact()
	: f_name(""), l_name(""), n_name(""), p_num(""), d_sec("") {
	std::cout << "Contact constructor called" << '\n';
}

Contact::~Contact() {
	std::cout << "Contact destructor called" << '\n';
}

void	Contact::setContact(std::string n_fn, std::string n_ln, std::string n_nn, std::string n_pn, std::string n_ds) {
	this->f_name = n_fn;
	this->l_name = n_ln;
	this->n_name = n_nn;
	this->p_num = n_pn;
	this->d_sec = n_ds;
}

std::string	Contact::getFirstName(int mode) const {
	if (mode == 0 || this->f_name.length() == 10)
		return (this->f_name);
	else 
		return (this->f_name.substr(0, 9) + ".");
}

void	Contact::displayRow(void) const {
	
}

void	Contact::displayDetails(void) const {

}