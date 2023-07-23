#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
private:
	std::string	_type;

public:
	Weapon(void);
	Weapon(std::string new_type);
	~Weapon(void);

	const std::string	&getType(void);
	void	setType(std::string new_type);
};

#endif