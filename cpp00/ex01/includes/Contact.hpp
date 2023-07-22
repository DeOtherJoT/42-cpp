#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact {
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	Contact();
	Contact(std::string f_n, std::string l_n, std::string n_n, std::string p_n, std::string d_s);
	~Contact(void);
};

#endif