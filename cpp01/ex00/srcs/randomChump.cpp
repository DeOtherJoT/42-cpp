#include "../includes/Zombie.hpp"

/**
 * rando_zombie instance is allocated on the stack, should
 * automatically destroy itself afterwords.
*/

void	randomChump(std::string name) {
	Zombie	rando_zombie(name);

	rando_zombie.annouce();
}