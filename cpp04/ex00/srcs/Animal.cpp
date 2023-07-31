#include "../includes/Animal.hpp"

Animal::Animal(void)
	: type("Animal")
{
	std::cout << "Animal Constructor called" << '\n';
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal Copy Constructor called" << '\n';
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "Animal Destructor called" << '\n';
}

Animal	&Animal::operator = (const Animal &src) {
	std::cout << "Animal assignment operator overload called" << '\n';
	this->type = src.getType();
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "Animal sounds...." << '\n';
}

std::string	Animal::getType() const {
	return (this->type);
}