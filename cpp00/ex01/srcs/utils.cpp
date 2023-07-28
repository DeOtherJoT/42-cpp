#include "../includes/main.hpp"

std::string	getField(const std::string &prompt) {
	std::string ret;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, ret);
		if (ret.size() == 0)
			std::cout << "No empty fields are allowed, please type something in." << "\n";
		else
			break ;
	}
	return (ret);
}

void	printEmptyRow(int index) {
	std::cout	<< std::setw(10) << index << '|'
				<< std::setw(11) << "|"
				<< std::setw(11) << "|"
				<< "\n";
}

int	getNumber(const std::string &temp) {
	if (temp.size() != 1) return (-1);
	if (temp[0] >= '0' && temp[0] <= '7') {
		return (temp[0] - '0');
	}
	return (-1);
}

int	getValidIndex(int total_contacts) {
	int		ret;
	std::string	temp;

	while (1) {
		std::cout << "Query contact list at index : ";
		std::getline(std::cin, temp);
		ret = getNumber(temp);
		if (ret < 0 || ret >= 8 || ret >= total_contacts)
			std::cout << "Not a valid index, please try again." << "\n";
		else
			break ; 
	}
	return (ret);
}