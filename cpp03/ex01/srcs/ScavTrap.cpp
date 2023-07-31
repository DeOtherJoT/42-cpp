#include "../includes/ScavTrap.hpp"

/* Constructors and Destructor */
ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name) {
	this->_hp = 100;
	this->_ep = 50;
	this->_attack_dmg = 20;
	std::cout << "[Named Constructor] ScavTrap unit named " << given_name << " has spawned!" << '\n';
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "[Copy Constructor] ScavTrap unit named " << this->_name << " has been cloned!" << '\n';
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap unit named " << this->_name << " has despawned!" << '\n';
}

/* Assignment Operator Overload */
ScavTrap	&ScavTrap::operator = (const ScavTrap &a) {
	std::cout << "ScavTrap copy assignment operator called" << '\n';
	this->_name = a.getName();
	this->_hp = a.getHitPoints();
	this->_ep = a.getEnergyPoints();
	this->_attack_dmg = a.getAttackDmg();
	return (*this);
}

/* Member Functions */
void	ScavTrap::attack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "ScavTrap " << this->_name << " is already dead!" << '\n';
		return ;
	}
	if (this->_ep == 0) {
		std::cout << "ScavTrap " << this->_name << " has no more energy left!" << '\n';
	}
	else {
		this->_ep -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << '\n';
	}
}

void	ScavTrap::guardGate(void) {
	std::cout << "Scavtrap " << this->_name << " is now in Gatekeeper mode!" << '\n';
}