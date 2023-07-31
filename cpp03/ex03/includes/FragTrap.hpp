#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
	int	_f_hp;
	int	_f_ep;
	int	_f_attack_dmg;

public:
	FragTrap(std::string given_name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	FragTrap &operator = (const FragTrap &a);

	void	attack(const std::string &target);
	void	highFivesGuys(void);
};

#endif