#include "../includes/main.hpp"

void	printCol(STRING str)
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

// void	printFilledLine(int index, Contact &elem)
// {
// 	printCol(std::to_string(index));
// 	std::cout << "|";
// 	printCol(elem.first_name);
// 	std::cout << "|";
// 	printCol(elem.last_name);
// 	std::cout << "|";
// 	printCol(elem.nickname);
// 	std::cout << "\n";
// }

void	printEmptyLine(int index) {
	printCol(std::to_string(index));
	for (int i = 0; i < 3; i++)
		std::cout << "|          ";
	std::cout << "\n";
}

STRING	getField(STRING prompt) {
	STRING ret;

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

int	getValidIndex(int total_contacts) {
	int		ret;
	STRING	temp;

	while (1) {
		std::cout << "Query contact list at index : ";
		std::getline(std::cin, temp);
		try {
			ret = std::stoi(temp);
		}
		catch (std::invalid_argument) {
			std::cout << "Invalid input, please input a number." << '\n';
			continue ;
		}
		if (ret < 0 || ret >= 8 || ret >= total_contacts)
			std::cout << "Not a valid index, please try again." << "\n";
		else
			break ; 
	}
	return (ret);
}