#include "../includes/main.hpp"

void	addContact(PhoneBook &phBook, int total_contacts) {
	STRING	in_fn, in_ln, in_nn, in_pn, in_ds;

	in_fn = getField("Please enter the first name     : ");
	in_ln = getField("PLease enter the last name      : ");
	in_nn = getField("Please enter the nick name      : ");
	in_pn = getField("PLease enter the phone number   : ");
	in_ds = getField("Please enter the darkest secret : ");
	phBook.getListElem(total_contacts % 8).setContact(in_fn, in_ln, in_nn, in_pn, in_ds);
}

void	searchContact(PhoneBook &phBook, int total_contacts) {
	int		temp_toi;
	
	std::cout	<< std::setw(10) << "INDEX" << '|'
				<< std::setw(10) << "FIRST NAME" << '|'
				<< std::setw(10) << "LAST NAME" << '|'
				<< std::setw(10) << "NICKNAME" << '\n';
	
	for (int i = 0; i < total_contacts; i++)
		phBook.getListElem(i).displayRow(i);

	for (int x = total_contacts; x < 8; x++)
		printEmptyRow(x);

	if (total_contacts == 0) {
		std::cout << "You do not have any friends." << '\n';
		return ;
	}
	temp_toi = getValidIndex(total_contacts);
	phBook.getListElem(temp_toi).displayDetails();
}

int	main(void) {
	PhoneBook	phBook;
	std::string	temp;
	int			total_contacts = 0;

	while (1) {
		std::cout << "ph_book >";
		std::getline(std::cin, temp);

		if (temp.compare("ADD") == 0) {
			addContact(phBook, total_contacts);
			total_contacts++;
		}
		else if (temp.compare("SEARCH") == 0)
			searchContact(phBook, total_contacts);
		else if (temp.compare("EXIT") == 0)
			break ;
	}

}