#include "../includes/FragTrap.hpp"

/* Constructors and Destructor */

FragTrap::FragTrap(std::string given_name) : ClapTrap(given_name) {
	this->_f_hp = 100;
	this->_f_ep = 100;
	this->_f_attack_dmg = 30;
	std::cout << "[Named Constructor] FragTrap unit named " << given_name << " has spawned!" << '\n';
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	std::cout << "[Copy Constructor] FragTrap unit named " << this->_name << " has been cloned!" << '\n';
	*this = src;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap unit named " << this->_name << " has despawned!" << '\n';
}

/* Assignment Operator Overload */
FragTrap	&FragTrap::operator = (const FragTrap &a) {
	std::cout << "FragTrap copy assignment operator called" << '\n';
	this->_name = a.getName();
	this->_hp = a.getHitPoints();
	this->_ep = a.getEnergyPoints();
	this->_attack_dmg = a.getAttackDmg();
	return (*this);
}

/* Member Functions */
void	FragTrap::attack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "FragTrap " << this->_name << " is already dead!" << '\n';
		return ;
	}
	if (this->_ep == 0) {
		std::cout << "FragTrap " << this->_name << " has no more energy left!" << '\n';
	}
	else {
		this->_ep -= 1;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << '\n';
	}
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " requests for a high five." << '\n';
}