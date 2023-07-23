#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N <= 0) {
		std::cout << "N must be a positive value." << '\n';
		return (NULL);
	}

	Zombie	*ret = new Zombie[N];

	for (int i = 0; i < N; i++) {
		ret[i].setName(name);
	}
	return (ret);
}