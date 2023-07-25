#include "../includes/FragTrap.hpp"

/* Constructors and Destructor */

FragTrap::FragTrap(std::string given_name) : ClapTrap(given_name) {
	this->_hp = 100;
	this->_ep = 100;
	this->_attack_dmg = 30;
	std::cout << "[Named Constructor] FragTrap unit named " << given_name << " has spawned!" << '\n';
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	*this = src;
	std::cout << "[Copy Constructor] FragTrap unit named " << this->_name << " has been cloned!" << '\n';
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
void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " requests for a high five." << '\n';
}