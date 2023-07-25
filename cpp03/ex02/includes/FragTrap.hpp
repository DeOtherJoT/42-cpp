#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string given_name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	FragTrap &operator = (const FragTrap &a);

	void	highFivesGuys(void);
};

#endif