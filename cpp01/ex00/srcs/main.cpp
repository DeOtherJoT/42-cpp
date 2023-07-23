#include "../includes/Zombie.hpp"

#include <stdlib.h>

int	main(void) {

	std::cout << "## Creating a new Zombie instance on the heap ##" << '\n' ;

	Zombie *Z_Steve = newZombie("Steve");
	std::cout << "## Back at main driver function ##" << '\n';
	Z_Steve->annouce();
	delete Z_Steve;

	std::cout << "## Creating a Zombie instance on the stack ##" << '\n';

	randomChump("Chuck");
	std::cout << "## Back at main driver function ##" << '\n';
	
	//system("leaks zombies");
}