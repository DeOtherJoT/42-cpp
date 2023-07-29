#include "../includes/HumanA.hpp"

HumanA::HumanA(const std::string &given_name, Weapon& given_weapon)
	: _name(given_name), _weapon(given_weapon)
{
	std::cout << "Overload HumanA constructor called" << '\n';
}

HumanA::~HumanA(void) {
	std::cout << "Default HumanA destructor called" << '\n';
}

void	HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << '\n';
}