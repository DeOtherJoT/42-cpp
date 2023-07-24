#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string	_name;
	int			_hp;
	int			_ep;
	int			_attack_dmg;
public:
	/* Constructors and Destructor */
	ClapTrap(void);
	ClapTrap(std::string given_name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);

	/* Operator Overload */
	ClapTrap &operator = (const ClapTrap &a);

	/* Member Methods */
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	/* Getter Methods */
	std::string	getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDmg(void) const;

	/* Setter Methods */
	void	setName(std::string new_name);
};

#endif