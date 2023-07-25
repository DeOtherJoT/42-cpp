#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog Constructor called" << '\n';
	this->type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << "Dog Copy Constructor called" << '\n';
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << '\n';
}

Dog	&Dog::operator = (const Dog &a) {
	std::cout << "Dog assignment operator overload called" << '\n';
	this->type = a.getType();
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Dog goes woof..." << '\n';
}