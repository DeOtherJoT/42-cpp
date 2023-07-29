#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "iostream"
#include "Weapon.hpp"

/**
 * @brief Cannot use a reference because HumanB may not have a weapon.
 * 
 */

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(void);
	HumanB(const std::string &given_name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& new_weapon);
};

#endif