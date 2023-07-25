#include "../includes/main.hpp"

PhoneBook::PhoneBook(void) : total_contacts(0) {
	std::cout << "PhoneBook class constructor called" << "\n";
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook class destructor called" << "\n";
}

void PhoneBook::displayContacts(void) const {
	int	i = 0;
	
	std::cout << "     INDEX|    F_NAME|    L_NAME|    N_NAME" << '\n';
	while ((i < this->total_contacts) && (i < 8)) {
		this->contact_list[i].displayContact(i);
		i++;
	}
	while (i < 8) {
		printEmptyLine(i);
		i++;
	}
}

void	PhoneBook::displayEntry(int index) const {
	std::cout << "First Name     : " << this->contact_list[index].first_name << "\n";
	std::cout << "Last Name      : " << this->contact_list[index].last_name << "\n";
	std::cout << "Nickname       : " << this->contact_list[index].nickname << "\n";
	std::cout << "Phone Number   : " << this->contact_list[index].phone_number << "\n";
	std::cout << "Darkest Secret : " << this->contact_list[index].darkest_secret << "\n";
}

void	PhoneBook::addContact(void) {
	STRING	in_fn = getField("Please enter the first name     : ");
	STRING	in_ln = getField("Please enter the last name      : ");
	STRING	in_nn = getField("Please enter the nickname       : ");
	STRING	in_pn = getField("Please enter the phone number   : ");
	STRING	in_ds = getField("Please enter the darkest secret : ");

	this->contact_list[total_contacts % 8].setContact(in_fn, in_ln, in_nn, in_pn, in_ds);
	this->total_contacts += 1;
}