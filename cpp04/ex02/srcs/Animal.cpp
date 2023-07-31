#include "../includes/Animal.hpp"

AAnimal::AAnimal(void)
	: type("Animal")
{
	std::cout << "AAnimal Constructor called" << '\n';
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "AAnimal Copy Constructor called" << '\n';
	*this = src;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called" << '\n';
}

AAnimal	&AAnimal::operator = (const AAnimal &src) {
	std::cout << "AAnimal assignment operator overload called" << '\n';
	this->type = src.getType();
	return (*this);
}

std::string	AAnimal::getType() const {
	return (this->type);
}