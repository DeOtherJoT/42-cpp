#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "iostream"
#include "Weapon.hpp"

/**
 * @brief	Can use a reference to weapon here, because it will always have a value and must
 * 			be initialised. 
 */

class HumanA {
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(const std::string &given_name, Weapon& given_weapon);
	~HumanA(void);

	void	attack(void);
};

#endif