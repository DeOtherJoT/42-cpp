#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string given_name) : ClapTrap(given_name), ScavTrap(given_name), FragTrap(given_name) {
	std::cout << "[Named Constructor] DiamondTrap unit named " << given_name << " has spawned!" << '\n';
	this->_name = given_name;
	ClapTrap::_name = given_name + "_clap_name";
	this->_hp = FragTrap::_f_hp;
	this->_ep = ScavTrap::_s_ep;
	this->_attack_dmg = FragTrap::_f_attack_dmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	std::cout << "[Copy Constructor] DiamondTrap unit named " << src.getName() << "has been cloned!" << '\n';
	*this = src;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap unit named " << this->_name << " has despawned!" << '\n';
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &a) {
	std::cout << "DiamondTrap copy assignment operator called" << '\n';
	this->_name = a.getName();
	ClapTrap::_name = a.ClapTrap::_name;
	this->_hp = a.getHitPoints();
	this->_ep = a.getEnergyPoints();
	this->_attack_dmg = a.getAttackDmg();
	return (*this);
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->getName() << '\n';
	std::cout << "My grandparent's name is " << this->ClapTrap::_name << '\n';
}

std::string	DiamondTrap::getName(void) const {
	return (DiamondTrap::_name);
}