#include "../includes/Zombie.hpp"

int	main(void) {

	std::cout << "\n## Creating a new Zombie instance on the heap ##\n" << '\n' ;

	Zombie *Z_Steve = newZombie("Steve");
	std::cout << "## Back at main driver function ##" << '\n';
	Z_Steve->annouce();
	delete Z_Steve;

	std::cout << "\n## Creating a Zombie instance on the stack ##\n" << '\n';

	randomChump("Chuck");
	std::cout << "## Back at main driver function ##" << '\n';
	
	// system("leaks zombies");
}