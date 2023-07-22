#include <iostream>
#include <cstring>
#include <cstdio>

int	main(int argc, char **argv)
{
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int x = 1; x < argc; x++) {
			for (size_t y = 0; y < strlen(argv[x]); y++) {
				putchar(toupper(argv[x][y]));
			}
		}
	}
	std::cout << "\n";
}