#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor called" << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal Copy Constructor called" << '\n';
	*this = src;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal Destructor called" << '\n';
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &src) {
	std::cout << "WrongAnimal assignment operator overload called" << '\n';
	this->type = src.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sounds being made...." << '\n';
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}