#include "../includes/main.hpp"

STRING	ltrim(const STRING &str) {
	size_t	start = str.find_first_not_of(" ");
	return ((start == std::string::npos) ? "" : str.substr(start));
}

STRING	rtrim(const STRING &str) {
	size_t	end = str.find_last_not_of(" ");
	return ((end == std::string::npos) ? "" : str.substr(0, end + 1));
}

STRING	stringTrim(const STRING &str) {
	return (rtrim(ltrim(str)));
}

STRING	getField(const STRING &prompt) {
	STRING raw;
	STRING proc;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, raw);
		if (std::cin.eof()) {
			std::cout << "EOF triggered, program will terminate" << '\n';
			return ("");
		}
		proc = stringTrim(raw);
		if (proc.size() == 0)
			std::cout << "No empty fields are allowed, please type something in." << "\n";
		else
			break ;
	}
	return (proc);
}

void	printEmptyRow(int index) {
	std::cout	<< std::setw(10) << index << '|'
				<< std::setw(11) << "|"
				<< std::setw(11) << "|"
				<< "\n";
}

int	getNumber(const STRING &temp) {
	if (temp.size() != 1) return (-1);
	if (temp[0] >= '0' && temp[0] <= '7') {
		return (temp[0] - '0');
	}
	return (-1);
}

int	getValidIndex(int total_contacts) {
	int		ret;
	STRING	temp;

	while (1) {
		std::cout << "Query contact list at index : ";
		std::getline(std::cin, temp);
		if (std::cin.eof()) {
			std::cout << "EOF triggered, program will terminate" << '\n';
			return (0);
		}
		ret = getNumber(temp);
		if (ret < 0 || ret >= 8 || ret >= total_contacts)
			std::cout << "Not a valid index, please try again." << "\n";
		else
			break ; 
	}
	return (ret);
}