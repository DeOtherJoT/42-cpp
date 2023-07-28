#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Phonebook constructor called" << '\n';
}

PhoneBook::~PhoneBook() {
	std::cout << "Phonebook destructor called" << '\n';
}

Contact	&PhoneBook::getListElem(int index) {
	return (this->contact_list[index]);
}