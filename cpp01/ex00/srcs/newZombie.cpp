#include "../includes/Zombie.hpp"

/**
 * ret instance is allocated on the heap, needs to be
 * manually destroyed in the main.cpp later.
*/

Zombie	*newZombie(std::string name) {
	Zombie	*ret = new Zombie(name);
	
	return (ret);
}