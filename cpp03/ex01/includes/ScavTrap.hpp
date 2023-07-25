#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string given_name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap &operator = (const ScavTrap &a);

	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif