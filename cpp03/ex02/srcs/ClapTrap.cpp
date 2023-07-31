#include "../includes/ClapTrap.hpp"

/* Constructors and Destructor */

ClapTrap::ClapTrap(std::string given_name)
	: _name(given_name), _hp(10), _ep(10), _attack_dmg(0)
{
	std::cout << "[Named Constructor] ClapTrap unit named " << given_name << " has spawned!" << '\n';
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "[Copy Constructor] ClapTrap unit named " << src.getName() << " has been cloned!" << '\n';
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap unit named " << this->_name << " has despawned!" << '\n';
}

/* Operator Overload */
ClapTrap	&ClapTrap::operator = (const ClapTrap &a) {
	std::cout << "ClapTrap copy assignment operator called" << '\n';
	this->_name = a.getName();
	this->_hp = a.getHitPoints();
	this->_ep = a.getEnergyPoints();
	this->_attack_dmg = a.getAttackDmg();
	return (*this);
}


/* Member Functions */
void	ClapTrap::attack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << '\n';
		return ;
	}
	if (this->_ep == 0) {
		std::cout << "ClapTrap " << this->_name << " has no more energy left!" << '\n';
	}
	else {
		this->_ep -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage!" << '\n';
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hp == 0) {
		std::cout << "Oh, have mercy! ClapTrap " << this->_name << " is already dead!" << '\n';
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage!" << '\n';
	if (amount >= (unsigned int)this->_hp) {
		std::cout << "ClapTrap " << this->_name << " has died!" << '\n';
		this->_hp = 0;
	}
	else {
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hp << " hit points left." << '\n';
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hp == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!" << '\n';
		return ;
	}
	if (this->_ep == 0) {
		std::cout << "ClapTrap " << this->_name << " has no more energy left!" << '\n';
	}
	else {
		std::cout << "ClapTrap " << this->_name << " has been repaired by " << amount << " hit points!" << '\n';
		this->_hp += amount;
		this->_ep -= 1;
		std::cout << "ClapTrap " << this->_name << " now has " << this->_hp << " hit points." << '\n'; 
	}
}

/* Getter Methods */
std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const {
	return (this->_hp);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (this->_ep);
}

int	ClapTrap::getAttackDmg(void) const {
	return (this->_attack_dmg);
}

/* Setter Methods */
void	ClapTrap::setName(std::string new_name) {
	std::cout << "ClapTrap " << this->_name << " is renamed to " << new_name << '\n';
	this->_name = new_name;
}