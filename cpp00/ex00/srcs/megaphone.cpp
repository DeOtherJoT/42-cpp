#include <iostream>

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return (0);
	}
	for (int x = 1; x < argc; x++) {
		int	y = 0;

		while (argv[x][y]) {
			if (argv[x][y] >= 'a' && argv[x][y] <= 'z') {
				argv[x][y] = std::toupper(argv[x][y]);
			}
			y++;
		}
		std::cout << argv[x];
	}
	std::cout << '\n';
}