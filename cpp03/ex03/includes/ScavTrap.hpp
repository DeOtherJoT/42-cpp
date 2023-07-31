#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
	int	_s_hp;
	int	_s_ep;
	int	_s_attack_dmg;

public:
	ScavTrap(std::string given_name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap &operator = (const ScavTrap &a);

	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif