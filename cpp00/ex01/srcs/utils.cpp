#include "../includes/main.hpp"

void	printCol(std::string str)
{
	if (str.size() < 10) {
		for (size_t i = 0; (i + str.size()) < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	else {
		std::cout << str.substr(0, 9) << ".";
	}
}

void	printEmptyLine(int index) {
	std::string temp = "0";

	temp[0] += index;
	printCol(temp);
	for (int i = 0; i < 3; i++)
		std::cout << "|          ";
	std::cout << "\n";
}

std::string	getField(std::string prompt) {
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

int	getNumber(std::string temp) {
	if (temp.size() != 1) return (-1);
	if (temp[0] >= '0' && temp[0] <= '7') {
		return (temp[0] -= '0');
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