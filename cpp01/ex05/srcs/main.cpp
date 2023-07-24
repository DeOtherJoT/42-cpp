#include "../includes/Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invaild input: ./harl <level>" << '\n';
		return (1);
	}

	Harl	karen;
	karen.complain(std::string(argv[1]));
	
	karen.complain("ERROR");
	return (0);
}