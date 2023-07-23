#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "iostream"
#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon&		_weapon;

public:
	HumanA(std::string given_name, Weapon& given_weapon);
	~HumanA(void);

	void	attack(void);
};

#endif