#include "../includes/main.hpp"

int	main(void) {
	PhoneBook	ph_book;
	STRING		command;
	int			index;

	while (1) {
		std::cout << "ph_book > ";
		std::getline(std::cin, command);

		if (command.compare("ADD") == 0) {
			ph_book.addContact();
		}
		else if (command.compare("SEARCH") == 0) {
			if (ph_book.total_contacts == 0) {
				std::cout << "There are currently no contacts in your phonebook" << "\n";
				continue ;
			}
			ph_book.displayContacts();
			index = getValidIndex(ph_book.total_contacts);
			ph_book.displayEntry(index);
		}
		else if (command.compare("EXIT") == 0) {
			break ;
		}
	}
	return (0);
}