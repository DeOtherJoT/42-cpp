#include "../includes/Weapon.hpp"

Weapon::Weapon(void) {
	std::cout << "Default Weapon constructor called" << '\n';
}

Weapon::Weapon(std::string new_type)
	: _type(new_type)
{
	std::cout << "Overload Weapon constructor called" << '\n';
}

Weapon::~Weapon(void) {
	std::cout << "Default Weapon destructor called" << '\n';
}

const std::string	&Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string new_type) {
	this->_type = new_type;
}