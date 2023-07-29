#include "../includes/Zombie.hpp"

int	ft_atoi(char *str) {
	int	ret = 0;

	for (int i = 0; (str[i] >= '0' && str[i] <= '9'); i++)
		ret = (ret * 10) + (str[i] - '0');
	return (ret);
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid format : ./zombie_horde <number of zombies>";
		return (0);
	}

	int	N = ft_atoi(argv[1]);

	std::cout << "Summoning the horde!" << '\n';
	Zombie	*horde = zombieHorde(N, "Steve");

	for (int i = 0; i < N; i++) {
		std::cout << "Index " << i << " : ";
		horde[i].annouce();
	}

	delete [] horde;
	// system("leaks zombie_horde");
	return (0);
}