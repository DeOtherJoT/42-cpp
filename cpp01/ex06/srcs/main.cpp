#include "../includes/Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invaild input: ./harlFilter <level>" << '\n';
		return (1);
	}

	Harl	karen;
	karen.complain(std::string(argv[1]));
	return (0);
}