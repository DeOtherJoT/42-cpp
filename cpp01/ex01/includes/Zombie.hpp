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
	void	setName(std::string new_name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif