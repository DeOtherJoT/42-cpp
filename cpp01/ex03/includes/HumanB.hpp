#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(void);
	HumanB(std::string given_name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& new_weapon);
};

#endif