#include "../includes/HumanB.hpp"

HumanB::HumanB(void) {
	std::cout << "Default HumanB constructor called" << '\n';
}

HumanB::HumanB(const std::string &given_name)
	: _name(given_name), _weapon(0)
{
	std::cout << "Overload HumanB constructor called" << '\n';
}

HumanB::~HumanB(void) {
	std::cout << "Default HumanB deconstructor called" << '\n';
}

void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
}

void	HumanB::setWeapon(Weapon& new_weapon) {
	this->_weapon = &new_weapon;
}