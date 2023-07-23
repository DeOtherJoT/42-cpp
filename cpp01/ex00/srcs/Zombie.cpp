#include "../includes/Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Default Zombie class constructor called" << '\n';
}

Zombie::Zombie(std::string given_name)
	: _name(given_name)
{
	std::cout << "Overload Zombie class constructor called" << '\n';
}

Zombie::~Zombie(void) {
	std::cout << this->_name << ": Zombie destructor called" << '\n';
}

void	Zombie::annouce(void) {
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << '\n';
}