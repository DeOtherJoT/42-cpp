#include "../includes/main.hpp"

Contact::Contact()
{
	std::cout << "Contact class default constructor called" << "\n";
}

Contact::~Contact(void) {
	std::cout << "Contact class destructor called" << "\n";
}

void	Contact::setContact(STRING f_n, STRING l_n, STRING n_n, STRING p_n, STRING d_s) {
	this->first_name = f_n;
	this->last_name = l_n;
	this->nickname = n_n;
	this->phone_number = p_n;
	this->darkest_secret = d_s;
}

void	Contact::displayContact(int index) const {
	printCol(std::to_string(index));
	std::cout << "|";
	printCol(this->first_name);
	std::cout << "|";
	printCol(this->last_name);
	std::cout << "|";
	printCol(this->nickname);
	std::cout << "\n";
}