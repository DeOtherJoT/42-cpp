#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap{
private:
	std::string	_name;
public:
	DiamondTrap(std::string given_name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap();
	DiamondTrap &operator = (const DiamondTrap &a);

	void	attack(const std::string &target);
	void	whoAmI();

	std::string	getName(void) const;
};

#endif