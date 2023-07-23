#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	_name;

public:
	Zombie(void);
	Zombie(std::string given_name);
	~Zombie(void);

	void	annouce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif