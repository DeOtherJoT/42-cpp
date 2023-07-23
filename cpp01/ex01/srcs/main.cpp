#include "../includes/Zombie.hpp"

int main(int argc, char **argv) {
	int	N = argv[argc - 1][0] - 48;

	std::cout << "Summoning the horde!" << '\n';
	Zombie	*horde = zombieHorde(N, "Steve");

	for (int i = 0; i < N; i++) {
		std::cout << "Index " << i << " : ";
		horde[i].annouce();
	}

	delete [] horde;
	return (0);
}