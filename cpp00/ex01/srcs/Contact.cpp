#include "../includes/main.hpp"

Contact::Contact() {
	std::cout << "Contact class default constructor called" << "\n";
}

Contact::Contact(std::string f_n, std::string l_n, std::string n_n, std::string p_n, std::string d_s)
	: first_name(f_n), last_name(l_n), nickname(n_n), phone_number(p_n) ,darkest_secret(d_s)
{
	std::cout << "Contact class constructor called" << "\n";
}

Contact::~Contact(void) {
	std::cout << "Contact class destructor called" << "\n";
}